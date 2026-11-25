/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** play_game_over_music
*/

#include "include.h"

void play_game_over_music(audio_t *music)
{
    sfMusic_play(music->game_over_music);
    sfMusic_setLooping(music->game_over_music, true);
}
