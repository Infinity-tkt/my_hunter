/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** manage_mouse_click_main_menu
*/

#include "include.h"

void press_button(my_hunter_t *my_h, button_t *button)
{
    if (button->type == PLAY) {
        init_in_game(my_h);
        my_h->state = GAME_MENU;
    }
    if (button->type == QUIT)
        sfRenderWindow_close(my_h->window.wnd);
}

void check_button(my_hunter_t *my_h, button_t *button, int x, int y)
{
    sfVector2f position = sfSprite_getPosition(button->my_sprite);
    sfVector2u size = sfRenderWindow_getSize(my_h->window.wnd);
    int hit = 0;
    float mul_x = (float)size.x / (float)WINDOW_WIDTH;
    float mul_y = (float)size.y / (float)WINDOW_HEIGHT;

    if (x > position.x * mul_x && x < (position.x + 320) * mul_x)
        hit++;
    if (y > position.y * mul_y && y < (position.y + 72) * mul_y)
        hit++;
    if (hit == 2)
        press_button(my_h, button);
}

void manage_mouse_click_main_menu(my_hunter_t *my_h)
{
    int x = my_h->window.event.mouseButton.position.x;
    int y = my_h->window.event.mouseButton.position.y;

    for (int i = 0; my_h->main_menu.button[i].my_sprite != NULL; i++)
        check_button(my_h, &my_h->main_menu.button[i], x, y);
}
