/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** init_wave
*/

#include "include.h"

static
void init_position_wave(my_hunter_t *my_h, wave_t *wave)
{
    sfVector2u size = {0};
    unsigned int size_text = 0;
    int x = 0;
    int y = 0;

    size = sfRenderWindow_getSize(my_h->window.wnd);
    size_text = sfText_getCharacterSize(wave->wave);
    x = size.x / 2 - (size_text * 2);
    y = size.y / 2 - (size_text / 2);
    init_vector2f(&wave->position_wave, x, y);
    sfText_setPosition(wave->wave, wave->position_wave);
}

static
void init_position_nb(wave_t *wave)
{
    int size = 0;
    int x = 0;
    int y = wave->position_wave.y;

    size = sfText_getCharacterSize(wave->wave);
    x = wave->position_wave.x + (size * 3);
    init_vector2f(&wave->position_nb, x, y);
    sfText_setPosition(wave->nb_wave, wave->position_nb);
}

void init_wave(my_hunter_t *my_h, wave_t *wave)
{
    wave->wave = sfText_create(my_h->font_style);
    wave->nb_wave = sfText_create(my_h->font_style);
    sfText_setString(wave->wave, "Wave: ");
    sfText_setCharacterSize(wave->wave, 100);
    sfText_setCharacterSize(wave->nb_wave, 100);
    init_position_wave(my_h, wave);
    init_position_nb(wave);
    wave->count_wave = 1;
}
