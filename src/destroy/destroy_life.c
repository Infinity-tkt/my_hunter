/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** destroy_life
*/

#include "include.h"
#include <stdio.h>

void destroy_life(life_t *life)
{
    if (life->my_sprite)
        sfSprite_destroy(life->my_sprite);
    if (life->my_texture)
        sfTexture_destroy(life->my_texture);
}
