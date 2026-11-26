#include <iostrean>
#include <curses.h>
#include "menu.h"

using namespace std;

void tampilkanMenu() {
    clear();

    mvprintw(2, 15, "========================================");   
    mvprintw(3, 15, "             WHACK A MOLE");
    mvprintw(4, 15, "========================================");
    mvprintw(7, 15, "1. START GAME");
    mvprintw(8, 15, "2. HOW TO PLAY");
    mvprintw(9, 15, "3. EXIT");
    mvprintw(12, 15, "Pilih menu (1-3): ");

    refresh();
}

void tampilkanCaraBermain() {
    clear();

    mvprintw(2, 5, "========== HOW TO PLAY ==========");
    mvprintw(5, 5, "1. Permainan dimulai dari level 1 (Level Poke) dengan waktu 60 detik.");
    mvprintw(6, 5, "2. Tikus dan Kelinci akan muncul dari 9 lubang yang tersedia.");
    mvprintw(7, 5, "3. Pukul Tikus yang muncul untuk mendapatkan 5 poin.");
    mvprintw(8, 5, "4. Jangan memukul Kelinci, karena poin akan berkurang sebanyak 5 poin.");
    mvprintw(9, 5, "5. Jika Tikus dan Kelinci muncul bersamaan, tetap pukul Tikus.");
    mvprintw(10, 5, "6.	Setelah waktu habis, poin pemain akan ditampilkan dengan target minimal 50 poin untuk level 1, 100 poin untuk level 2, dan 150 poin untuk level 3.");
    mvprintw(11, 5, "7. Jika target poin tercapai, pemain lanjut ke level berikutnya.");
    mvprintw(12, 5, "8. Jika pemain menang di level 3 maka pemain memenangkan permainan.");
    mvprintw(13, 5, "9. Jika target poin tidak tercapai di level mana pun, pemain dinyatakan kalah atau gugur.");
    refresh();

    getch();
}
