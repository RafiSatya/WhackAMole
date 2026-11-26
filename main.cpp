#include <iostream>
#include <curses.h>
#include "menu.h"

using namespace std;

int main() {
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);

    bool programAktif = true;

    while (programAktif) {
        tampilkanMenu();

        int pilihan = getch();

        switch (pilihan) {
            case 1:
                clear();
                mvprintw(5, 10, "GAME AKAN DIMULAI...")
                mvprintw(7, 10, "Menunggu modul permainan...")
                mvprintw(10, 10, "Tekan tombol apa saja.")
                refresh();
                getch();
                break;
            
            case 2:
                tampilkanCaraBermain();
                break;

            case 3:
                programAktif = false;
                break;

            default:
                mvprintw(15, 15, "Pilihan tidak tersedia!")
                refresh();
                getch();
                break;
        }
    }

    endwin();

    return 0;
}