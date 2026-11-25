/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** destroy_crossair
*/

#include "include.h"

void destroy_crossair(crossair_t *crossair)
{
    if (crossair->my_sprite)
        sfSprite_destroy(crossair->my_sprite);
    if (crossair->my_texture)
        sfTexture_destroy(crossair->my_texture);
}
