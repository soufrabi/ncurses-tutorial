#include <curses.h>
#include <ncurses.h>

int main(int argc, char *argv[]){
    
    // sets up memory and clears the screen
    initscr();

    int x,y;
    x=y=10;

    // Moves cursor to specific location
    move(y,x);
    printw("Hello World");
    
    refresh();


    int c = getch();
    move(0,0);
    printw("%d",c);
    refresh();

    c=getch();
    mvprintw(30,40 , "%d",c);
    refresh();

    clear();

    mvprintw(20,20,"kal");

    getch();
    endwin();
    // deallocates memory , ends ncurses


    return 0;
}

