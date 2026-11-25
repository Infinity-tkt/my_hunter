/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** analyse_event_game_over
*/

#include "include.h"

void analyse_events_game_over(my_hunter_t *my_h)
{
    if (my_h->window.event.type == sfEvtClosed)
        sfRenderWindow_close(my_h->window.wnd);
    if (my_h->window.event.key.scancode == sfScanSpace) {
        my_h->state = MAIN_MENU;
        init_in_game(my_h);
        sfMusic_stop(my_h->audio.game_over_music);
        play_background_music(&my_h->audio);
    }
}
