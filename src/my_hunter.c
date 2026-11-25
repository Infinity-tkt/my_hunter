/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** my_hunter
*/

#include "include.h"
#include <stdio.h>

tab_menu_t const tab[] = {
    {&main_menu, MAIN_MENU},
    {&game, GAME_MENU},
    {&game_over_menu, GAME_OVER_MENU},
    {&wave_menu, WAVE_MENU}
};

int my_hunter(void)
{
    my_hunter_t my_h = {0};

    srand(time(NULL));
    if (init_struct(&my_h) == ERROR_EXIT)
        return ERROR_EXIT;
    sfRenderWindow_setFramerateLimit(my_h.window.wnd, 60);
    play_background_music(&my_h.audio);
    while (sfRenderWindow_isOpen(my_h.window.wnd)) {
        sfRenderWindow_clear(my_h.window.wnd, sfBlack);
        tab[my_h.state].menu(&my_h);
        sfRenderWindow_display(my_h.window.wnd);
    }
    destroy_all(&my_h);
    return SUCCESS_EXIT;
}

int main(int ac, char **av)
{
    if (ac > 2)
        return ERROR_EXIT;
    if (ac == 2) {
        if (check_h_option(av) == ERROR_EXIT)
            return ERROR_EXIT;
        return SUCCESS_EXIT;
    }
    if (my_hunter() == ERROR_EXIT)
        return ERROR_EXIT;
    return SUCCESS_EXIT;
}
