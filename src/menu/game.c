/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** game
*/

#include "include.h"

static
void set_clock(my_hunter_t *my_h)
{
    my_h->clock.time = sfClock_getElapsedTime(my_h->clock.clock);
    my_h->clock.miliseconds = sfTime_asMilliseconds(my_h->clock.time);
    if (my_h->clock.miliseconds > 0.01)
        sfClock_restart(my_h->clock.clock);
}

void switch_game_over(my_hunter_t *my_h)
{
    my_h->state = GAME_OVER_MENU;
    store_best_score(my_h);
    sfMusic_stop(my_h->audio.background_audio);
    play_game_over_music(&my_h->audio);
    my_h->nb_enemy = 10;
    my_h->nb_dead_enemy = 0;
    my_h->wave.count_wave = 1;
}

void game(my_hunter_t *my_h)
{
    while (sfRenderWindow_pollEvent(my_h->window.wnd, &my_h->window.event))
        analyse_events_game(my_h);
    if (my_h->life.hp <= 0) {
        switch_game_over(my_h);
        return;
    }
    if (my_h->nb_enemy - my_h->nb_dead_enemy == 0) {
        destroy_kaiju(my_h);
        my_h->nb_enemy += 3;
        my_h->nb_dead_enemy = 0;
        init_enemy(my_h);
        sfClock_restart(my_h->clock.clock);
        my_h->wave.count_wave += 1;
        my_h->state = WAVE_MENU;
    }
    set_clock(my_h);
    display_all_game(my_h);
}
