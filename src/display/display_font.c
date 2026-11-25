/*
** EPITECH PROJECT, 2026
** Untitled (Workspace)
** File description:
** display_font
*/

#include "include.h"

void display_font(my_hunter_t *my_h, font_t *font)
{
    sfRenderWindow_drawSprite(my_h->window.wnd, font->my_sprite, NULL);
}
