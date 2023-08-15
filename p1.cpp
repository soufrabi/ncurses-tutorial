#include <ncurses.h>

int main(int argc, char *argv[]){
    
    // sets up memory and clears the screen
    initscr();

    printw("Hello World");

    
    refresh();


    int c = getch();
    printf("%d",c);


    getch();
    endwin();
    // deallocates memory , ends ncurses


    return 0;
}

