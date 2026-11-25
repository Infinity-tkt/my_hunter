/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** display_life
*/

#include "include.h"

void display_life(my_hunter_t *my_h)
{
    if (my_h->life.hp != my_h->life.hp_temp) {
        my_h->life.hp_temp = my_h->life.hp;
        my_h->life.rect.position.y -= 36;
    }
    sfSprite_setTextureRect(my_h->life.my_sprite, my_h->life.rect);
    sfRenderWindow_drawSprite(my_h->window.wnd, my_h->life.my_sprite, NULL);
}
