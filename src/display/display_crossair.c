/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** display_crossair
*/

#include "include.h"

void display_crossair(my_hunter_t *my_h, crossair_t *crossair)
{
    sfRenderWindow_drawSprite(my_h->window.wnd, crossair->my_sprite, NULL);
}
