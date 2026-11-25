/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** game_over_menu
*/
#include <stdio.h>
#include "include.h"

void game_over_menu(my_hunter_t *my_h)
{
    while (sfRenderWindow_pollEvent(my_h->window.wnd, &my_h->window.event)) {
        analyse_events_game_over(my_h);
        if (my_h->state != GAME_OVER_MENU)
            break;
    }
    display_font(my_h, &my_h->game_over);
}
