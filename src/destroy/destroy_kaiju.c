/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** destroy_kaiju
*/

#include "include.h"

void destroy_kaiju(my_hunter_t *my_h)
{
    if (!my_h->kaiju)
        return;
    for (int i = 0; my_h->kaiju[i].my_sprite != NULL; i++) {
        if (my_h->kaiju[i].is_alive == 1)
            sfSprite_destroy(my_h->kaiju[i].my_sprite);
    }
    free(my_h->kaiju);
}
