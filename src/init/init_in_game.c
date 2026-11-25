/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** init_in_game
*/

#include "include.h"

void init_in_game(my_hunter_t *my_h)
{
    destroy_clock(&my_h->clock);
    destroy_life(&my_h->life);
    destroy_kaiju(my_h);
    init_clock(&my_h->clock);
    init_enemy(my_h);
    init_life(&my_h->life);
}
