/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** init_enemy
*/

#include "include.h"

static
void init_rect(enemy_t *kaiju, int y)
{
    kaiju->rect.position.x = 0;
    kaiju->rect.position.y = y;
    kaiju->rect.size.x = 110;
    kaiju->rect.size.y = 110;
}

void init_movement(my_hunter_t *my_h, enemy_t *kaiju)
{
    sfVector2u size = sfRenderWindow_getSize(my_h->window.wnd);
    float x = ((float)size.x * kaiju->speed);

    kaiju->movement.x = (int)x;
    kaiju->movement.y = 0;
}

static
int my_random(int max)
{
    int nb = 0;

    nb = rand();
    nb %= max;
    return nb;
}

static
void create_type(enemy_t *kaiju)
{
    int nb = rand() % 101;

    if (nb <= 70) {
        kaiju->speed = 0.003;
        init_rect(kaiju, 220);
        kaiju->point = 10;
    } else if (nb <= 95) {
        kaiju->speed = 0.004;
        init_rect(kaiju, 0);
        kaiju->point = 30;
    } else {
        kaiju->speed = 0.006;
        init_rect(kaiju, 110);
        kaiju->point = 50;
    }
}

static
void fill_enemy(my_hunter_t *my_h, enemy_t *kaiju)
{
    create_type(kaiju);
    init_movement(my_h, kaiju);
    init_base_position(kaiju);
    kaiju->my_sprite = sfSprite_create(my_h->kaiju_texture);
    kaiju->is_alive = 1;
    sfSprite_setPosition(kaiju->my_sprite, kaiju->base);
    sfSprite_setTextureRect(kaiju->my_sprite, kaiju->rect);
}

void init_base_position(enemy_t *kaiju)
{
    kaiju->base.x = -my_random(800) - 110;
    kaiju->base.y = my_random(400);
}

int init_enemy(my_hunter_t *my_h)
{
    my_h->kaiju = malloc(sizeof(enemy_t) * (my_h->nb_enemy + 1));
    if (my_h->kaiju == NULL)
        return ERROR_EXIT;
    for (int i = 0; i < my_h->nb_enemy; i++) {
        fill_enemy(my_h, &my_h->kaiju[i]);
    }
    my_h->kaiju[my_h->nb_enemy].my_sprite = NULL;
    return SUCCESS_EXIT;
}
