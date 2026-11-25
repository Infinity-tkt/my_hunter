/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** destroy_all
*/

#include "include.h"

void destroy_all(my_hunter_t *my_h)
{
    destroy_clock(&my_h->clock);
    destroy_font(&my_h->font);
    destroy_font(&my_h->game_over);
    destroy_font(&my_h->rock);
    destroy_kaiju(my_h);
    destroy_life(&my_h->life);
    destroy_main_menu(&my_h->main_menu);
    destroy_score(&my_h->score);
    destroy_wave(&my_h->wave);
    destroy_window(&my_h->window);
    destroy_music(&my_h->audio);
    destroy_crossair(&my_h->crossair);
    if (my_h->font_style)
        sfFont_destroy(my_h->font_style);
    if (my_h->kaiju_texture)
        sfTexture_destroy(my_h->kaiju_texture);
}
