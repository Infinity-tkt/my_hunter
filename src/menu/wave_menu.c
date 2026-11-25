/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** wave_menu
*/

#include "include.h"

void wave_menu(my_hunter_t *my_h)
{
    display_font(my_h, &my_h->font);
    display_font(my_h, &my_h->rock);
    display_life(my_h);
    sfRenderWindow_drawText(my_h->window.wnd, my_h->score.text_score, NULL);
    draw_nb(my_h->window.wnd, my_h->score.text_value, my_h->score.value);
    my_h->clock.time = sfClock_getElapsedTime(my_h->clock.clock);
    my_h->clock.miliseconds = sfTime_asMilliseconds(my_h->clock.time);
    while (sfRenderWindow_pollEvent(my_h->window.wnd, &my_h->window.event)) {
        if (my_h->window.event.type == sfEvtClosed)
            sfRenderWindow_close(my_h->window.wnd);
    }
    sfRenderWindow_drawText(my_h->window.wnd, my_h->wave.wave, NULL);
    draw_nb(my_h->window.wnd, my_h->wave.nb_wave, my_h->wave.count_wave);
    if (my_h->clock.miliseconds > 1000) {
        my_h->state = GAME_MENU;
        sfClock_restart(my_h->clock.clock);
    }
}
