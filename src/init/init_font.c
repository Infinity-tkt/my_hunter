/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** init_font
*/

#include "include.h"

void init_font(font_t *font, char *path_file, sfVector2f *scale)
{
    font->my_texture = sfTexture_createFromFile(path_file, NULL);
    font->my_sprite = sfSprite_create(font->my_texture);
    sfSprite_setScale(font->my_sprite, *scale);
}
