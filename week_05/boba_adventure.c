// COMP1511 Week 5 Lecture 2
// Bubble Tea Adventure!
// Tammy Zhong

#include <stdio.h>

#define MAP_ROWS 6
#define MAP_COLUMNS 8

#define UP 'w'
#define DOWN 's'
#define LEFT 'a'
#define RIGHT 'd'

enum entity {
    PERSON,
    BOBA,
    FOOTPRINT_UP,
    FOOTPRINT_DOWN,
    FOOTPRINT_LEFT,
    FOOTPRINT_RIGHT,
    EMPTY
};

enum place_type {
    SHOP,
    GYM,
    HOME,
    UNDEVELOPED
};

struct location {
    enum entity entity;
    enum place_type place;
};

// struct position {
//     // current_row
//     // current_col
// }


// my functions
int check_valid_inputs(int row, int col);
void find_boba(struct location map[MAP_ROWS][MAP_COLUMNS], int home_row, 
    int home_col, int shop_row, int shop_col);

void initialise_map(struct location map[MAP_ROWS][MAP_COLUMNS]);
void print_map(struct location map[MAP_ROWS][MAP_COLUMNS]);
void print_location(struct location location, int place_print);

int main(void) {

    struct location map[MAP_ROWS][MAP_COLUMNS];

    initialise_map(map);

    // get user input of home location
    int home_row, home_col;
    printf("Where is my home: ");
    scanf("%d %d", &home_row, &home_col);

    // get user input of shop location
    int shop_row, shop_col;
    printf("Where is the boba shop: ");
    scanf("%d %d", &shop_row, &shop_col);

    // If the inputs are not valid, 
    if (check_valid_inputs(home_row, home_col) != 1 
        || check_valid_inputs(shop_row, shop_col) != 1) {
        // tell the user inputs not valid
        printf("Inputs are not valid.\n");
        // end the program
        return 1;
    }


    // Add code to get more user input (as a part of the initial details) to
    // build a big gym (2x2) (so I can stay healthy whilst drinking more
    // boba) - gym location (starting coordinate).
    char want_gym;
    printf("Do you want to build a gym? (y/n): ");
    scanf(" %c", &want_gym);
    if (want_gym == 'y') {
        // ask wherethey want the gym
        printf("Where do you want the gym? ");
        int gym_row, gym_col;
        scanf("%d %d", &gym_row, &gym_col);

        int row = gym_row;
        while (row < gym_row + 2) {
            int col = gym_col;
            while (col  < gym_col + 2) {
                map[row][col].place = GYM;
                col++;
            }
            row++;
        }
        printf("Map after gym built:");
        print_map(map);
    }
    
    
    // update the map with the boba shop and home location then 
    map[home_row][home_col].entity = PERSON;
    map[home_row][home_col].place = HOME;

    map[shop_row][shop_col].entity = BOBA;
    map[shop_row][shop_col].place = SHOP;
    
    // print out the initial map.
    printf("Initial Map:\n");
    print_map(map);

    find_boba(map, home_row, home_col, shop_row, shop_col);


    return 0;
}

// explore until person finds boba
void find_boba(struct location map[MAP_ROWS][MAP_COLUMNS], int home_row, int home_col, int shop_row, int shop_col) {
    // Keep getting user input of 'w' (up), 'a' (left), 's' (down),'d' (right),
    // update and print the updated map until I find the boba store.
    int current_row = home_row;
    int current_col = home_col;

    char direction_input;
    while ((current_row != shop_row || current_col != shop_col) 
        && scanf(" %c", &direction_input) == 1) {    
        if (direction_input == UP) {   // up
            map[current_row][current_col].entity = FOOTPRINT_UP;
            // row = row - 1
            current_row = current_row - 1;

        } else if (direction_input == LEFT) {    // left
            //...
            map[current_row][current_col].entity = FOOTPRINT_LEFT;
            current_col = current_col - 1;
        } else if (direction_input == DOWN) {    // down
            //...
            map[current_row][current_col].entity = FOOTPRINT_DOWN;
            current_row = current_row + 1;
        } else if (direction_input == RIGHT) {
            map[current_row][current_col].entity = FOOTPRINT_RIGHT;
            current_col = current_col + 1;
        }
        // current_row and current_col position that the person is meant to be at
        map[current_row][current_col].entity = PERSON;

        printf("Updated map:\n");
        print_map(map);
    }
}

// return 0 - given inputs not valid inputs
// return 1 - given inputs are valid inputs
int check_valid_inputs(int row, int col) {
    // if (row >= 0 && row <= MAP_ROWS && col >= 0 && col <= MAP_COLUMNS) {
    //     return 1;
    // } else {
    //     return 0;
    // }
    return row >= 0 && row < MAP_ROWS && col >= 0 && col < MAP_COLUMNS;
} 


// STARTER FUNCTIONS BELOW THIS POINT:
// initialises the map with empty undeveloped areas
void initialise_map(struct location map[MAP_ROWS][MAP_COLUMNS]) {
    int row = 0;
    while (row < MAP_ROWS) {
        int col = 0;
        while (col < MAP_COLUMNS) {
            map[row][col].place = UNDEVELOPED;
            map[row][col].entity = EMPTY;
            col++;
        }
        row++;
    }
}

// print out the map
void print_map(struct location map[MAP_ROWS][MAP_COLUMNS]) {
    int row = 0;
    while (row < MAP_ROWS * 2) {
        int col = 0;
        while (col < MAP_COLUMNS) {
            print_location(map[row / 2][col], row % 2);
            col++;
        }
        row++;
        printf("\n");
    }

}

// prints specific location on map (used by print_map)
void print_location(struct location location, int place_print) {
    if (place_print) {
        if (location.place == SHOP) {
            printf(" S ");
        } else if (location.place == HOME) {
            printf(" H ");
        } else if (location.place == GYM) {
            printf(" G ");
        } else if (location.place == UNDEVELOPED) {
            printf(" . ");
        } else {
            printf(" ? ");
        }
    } else {

        if (location.entity == EMPTY) {
            printf("   ");
        } else if (location.entity == PERSON) {
            printf("(P)");
        } else if (location.entity == BOBA) {
            printf("(B)");
        } else if (location.entity == FOOTPRINT_UP) {
            printf("(^)");
        } else if (location.entity == FOOTPRINT_RIGHT) {
            printf("(>)");
        } else if (location.entity == FOOTPRINT_DOWN) {
            printf("(v)");
        } else if (location.entity == FOOTPRINT_LEFT) {
            printf("(<)");
        } else {
            printf(" ? ");
        }
    }
}