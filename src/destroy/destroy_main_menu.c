/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** destroy_main_menu
*/

#include "include.h"

void destroy_main_menu(main_menu_t *main_menu)
{
    if (main_menu->title.my_sprite)
        sfSprite_destroy(main_menu->title.my_sprite);
    for (int i = 0; main_menu->button[i].my_sprite != NULL; i++) {
        if (main_menu->button[i].my_sprite)
            sfSprite_destroy(main_menu->button[i].my_sprite);
    }
    if (main_menu->my_texture)
        sfTexture_destroy(main_menu->my_texture);
}
