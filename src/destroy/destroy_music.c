/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** destroy_music
*/

#include "include.h"

void destroy_music(audio_t *audio)
{
    if (audio->background_audio)
        sfMusic_destroy(audio->background_audio);
    if (audio->game_over_music)
        sfMusic_destroy(audio->game_over_music);
    if (audio->kill_sound)
        sfMusic_destroy(audio->kill_sound);
}
