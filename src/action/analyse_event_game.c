/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** analyse_event
*/

#include "include.h"

void resize_enemy(my_hunter_t *my_h)
{
    for (int i = 0; i < my_h->nb_enemy; i++) {
        if (my_h->kaiju[i].is_alive == 1)
            init_movement(my_h, &my_h->kaiju[i]);
    }
}

void analyse_events_game(my_hunter_t *my_h)
{
    if (my_h->window.event.type == sfEvtMouseButtonReleased)
        manage_mouse_click_game(my_h);
    if (my_h->window.event.type == sfEvtResized)
        resize_enemy(my_h);
    if (my_h->window.event.type == sfEvtClosed) {
        store_best_score(my_h);
        sfRenderWindow_close(my_h->window.wnd);
    }
}
