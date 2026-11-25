/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** move_enemy
*/

#include "include.h"

void move_enemy(my_hunter_t *my_h, enemy_t *kaiju)
{
    sfVector2f position = sfSprite_getPosition(kaiju->my_sprite);
    sfVector2u size_window = sfRenderWindow_getSize(my_h->window.wnd);

    if (position.x > size_window.x) {
        my_h->life.hp -= 10;
        kaiju->is_alive = 0;
        my_h->nb_dead_enemy += 1;
        sfSprite_destroy(kaiju->my_sprite);
    } else
        sfSprite_move(kaiju->my_sprite, kaiju->movement);
}
