/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** destroy_window
*/

#include "include.h"

void destroy_window(window_t *window)
{
    if (window->wnd)
        sfRenderWindow_destroy(window->wnd);
}
