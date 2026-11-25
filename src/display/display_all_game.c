/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** display_all
*/

#include "include.h"

static
void display_kaiju(my_hunter_t *my_h, enemy_t *kaiju)
{
    if ((int)(my_h->clock.miliseconds * 100) % 10 == 0 && kaiju->is_alive == 1)
        move_enemy(my_h, kaiju);
    if ((int)(my_h->clock.miliseconds * 100) % 5 == 0 && kaiju->is_alive == 1)
        enemy_animation(kaiju);
    if (kaiju->is_alive == 1)
        display_enemy(my_h, kaiju);
}

void display_all_game(my_hunter_t *my_h)
{
    display_font(my_h, &my_h->font);
    for (int i = 0; my_h->kaiju[i].my_sprite != NULL; i++)
        display_kaiju(my_h, &my_h->kaiju[i]);
    display_font(my_h, &my_h->rock);
    display_life(my_h);
    sfRenderWindow_drawText(my_h->window.wnd, my_h->score.text_score, NULL);
    draw_nb(my_h->window.wnd, my_h->score.text_value, my_h->score.value);
}
