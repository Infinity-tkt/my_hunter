/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** analyse_event_main_menu
*/

#include "include.h"

void analyse_events_main_menu(my_hunter_t *my_h)
{
    if (my_h->window.event.type == sfEvtMouseButtonReleased)
        manage_mouse_click_main_menu(my_h);
    if (my_h->window.event.type == sfEvtClosed)
        sfRenderWindow_close(my_h->window.wnd);
}
