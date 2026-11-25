/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** main_menu
*/

#include "include.h"
#include <stdio.h>

void main_menu(my_hunter_t *my_h)
{
    while (sfRenderWindow_pollEvent(my_h->window.wnd, &my_h->window.event)) {
        analyse_events_main_menu(my_h);
        if (my_h->state != MAIN_MENU)
            break;
    }
    display_main_menu(my_h);
}
