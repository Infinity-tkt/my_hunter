/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** enemy_animation
*/

#include "include.h"

static
void move_rect(sfIntRect *rect, int offset, int max_value)
{
    if (rect->position.x < max_value)
        rect->position.x += offset;
    else
        rect->position.x = 0;
}

void enemy_animation(enemy_t *kaiju)
{
    move_rect(&kaiju->rect, 110, 770);
    sfSprite_setTextureRect(kaiju->my_sprite, kaiju->rect);
}
