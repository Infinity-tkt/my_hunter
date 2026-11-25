/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** destroy_font
*/

#include "include.h"

void destroy_font(font_t *font)
{
    if (font->my_sprite)
        sfSprite_destroy(font->my_sprite);
    if (font->my_texture)
        sfTexture_destroy(font->my_texture);
}
