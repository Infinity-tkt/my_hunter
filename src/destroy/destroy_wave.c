/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** destroy_wave
*/

#include "include.h"

void destroy_wave(wave_t *wave)
{
    if (wave->wave)
        sfText_destroy(wave->wave);
    if (wave->nb_wave)
        sfText_destroy(wave->nb_wave);
}
