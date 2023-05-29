// COMP1511 Week 5 Lecture 2
// Bubble Tea Adventure!
// Tammy Zhong

#include <stdio.h>

#define MAP_ROWS 6
#define MAP_COLUMNS 8

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

void initialise_map(struct location map[MAP_ROWS][MAP_COLUMNS]);
void print_map(struct location map[MAP_ROWS][MAP_COLUMNS]);
void print_location(struct location location, int place_print);

int main(void) {

    struct location map[MAP_ROWS][MAP_COLUMNS];

    initialise_map(map);

    // TODO...

    print_map(map);


    return 0;
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