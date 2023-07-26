#include "splashkit.h"

int main() {

    window w = open_window("test", 500, 500);
    int x = 250;
    int y = 250;
    while(!window_close_requested(w)) {

        fill_rectangle(COLOR_BLUE, x, 250, 50, 50);

        if(key_down(LEFT_KEY)) {
            x--;
        }
        process_events();
        refresh_screen(60);
        clear_screen(COLOR_WHITE);
    }
    return 0;
}