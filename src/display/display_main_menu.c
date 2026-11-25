/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** display_main_menu
*/

#include "include.h"

void display_main_menu(my_hunter_t *my_h)
{
    display_font(my_h, &my_h->font);
    display_sprite(my_h->window.wnd, my_h->main_menu.title.my_sprite);
    for (int i = 0; my_h->main_menu.button[i].my_sprite != NULL; i++)
        display_sprite(my_h->window.wnd, my_h->main_menu.button[i].my_sprite);
}
