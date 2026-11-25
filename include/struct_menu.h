/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** struct_menu
*/

#ifndef STRUCT_MENU_H_
    #define STRUCT_MENU_H_
    #include "include.h"

typedef enum {
    MAIN_MENU,
    GAME_MENU,
    GAME_OVER_MENU,
    WAVE_MENU
} state_menu_t;

typedef struct tab_menu_s {
    void(*menu)(my_hunter_t *my_h);
    state_menu_t state;
} tab_menu_t;

#endif //!STRUCT_MENU_H_
