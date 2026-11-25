/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** play_background_music
*/

#include "include.h"

void play_background_music(audio_t *music)
{
    sfMusic_play(music->background_audio);
    sfMusic_setLooping(music->background_audio, true);
}
