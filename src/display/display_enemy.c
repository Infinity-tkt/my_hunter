/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** display_enemy
*/

#include "include.h"

void display_enemy(my_hunter_t *my_h, enemy_t *kaiju)
{
    sfRenderWindow_drawSprite(my_h->window.wnd, kaiju->my_sprite, NULL);
}
