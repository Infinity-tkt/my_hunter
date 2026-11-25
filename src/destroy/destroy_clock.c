/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** destroy_clock
*/

#include "include.h"

void destroy_clock(my_clock_t *clock)
{
    if (clock->clock)
        sfClock_destroy(clock->clock);
}
