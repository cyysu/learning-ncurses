#include <ncurses.h>

int main(int argc, char *argv[])
{
        int yoda = 874;
        int ss = 65;

        initscr();
        printw("Yoda is %d years old\n", yoda);
        printw("He has collected %d years\n", yoda - ss);
        printw("of Social Security.");
        refresh();
        getch();

        endwin();
        return 0;
}
