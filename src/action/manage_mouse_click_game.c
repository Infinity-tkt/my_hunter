/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** manage_mouse_click
*/

#include "include.h"
#include <stdio.h>

static
void kill_kaiju(my_hunter_t *my_h, enemy_t *kaiju)
{
    sfMusic_play(my_h->audio.kill_sound);
    kaiju->is_alive = 0;
    sfSprite_destroy(kaiju->my_sprite);
    my_h->nb_dead_enemy += 1;
    my_h->score.value += kaiju->point;
}

static
int check_kaiju(my_hunter_t *my_h, enemy_t *kaiju, int x, int y)
{
    sfVector2f position;
    sfVector2u size = sfRenderWindow_getSize(my_h->window.wnd);
    int hit = 0;
    float mul_x = (float)size.x / (float)WINDOW_WIDTH;
    float mul_y = (float)size.y / (float)WINDOW_HEIGHT;

    if (kaiju->is_alive == 1) {
        position = sfSprite_getPosition(kaiju->my_sprite);
        if (x > position.x * mul_x && x < (position.x + 110) * mul_x)
            hit++;
        if (y > position.y * mul_y && y < (position.y + 110) * mul_y)
            hit++;
        if (hit == 2 && kaiju->is_alive == 1) {
            kill_kaiju(my_h, kaiju);
            return SUCCESS_EXIT;
        }
    }
    return ERROR_EXIT;
}

static
void compare_click_sprite_position(my_hunter_t *my_h)
{
    int x = my_h->window.event.mouseButton.position.x;
    int y = my_h->window.event.mouseButton.position.y;
    int i = 0;

    for (; my_h->kaiju[i].my_sprite != NULL; i++)
        if (check_kaiju(my_h, &my_h->kaiju[i], x, y) == SUCCESS_EXIT)
            break;
    if (i == my_h->nb_enemy)
        my_h->life.hp -= 10;
}

void manage_mouse_click_game(my_hunter_t *my_h)
{
    compare_click_sprite_position(my_h);
}
