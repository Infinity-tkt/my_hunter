/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** init_main_menu
*/

#include "include.h"

static
void init_rect(sfIntRect *rect, int y, int size_x, int size_y)
{
    rect->position.x = 0;
    rect->position.y = y;
    rect->size.x = size_x;
    rect->size.y = size_y;
}

static
void init_title(main_menu_t *menu, title_t *title)
{
    title->my_sprite = sfSprite_create(menu->my_texture);
    init_rect(&title->rect, 0, 960, 220);
    init_vector2f(&title->position, WINDOW_WIDTH / 2 - 480, 0);
    sfSprite_setTextureRect(title->my_sprite, title->rect);
    sfSprite_setPosition(title->my_sprite, title->position);
}

static
void init_play(main_menu_t *menu, button_t *play)
{
    play->my_sprite = sfSprite_create(menu->my_texture);
    init_rect(&play->rect, 220, 320, 72);
    init_vector2f(&play->position, WINDOW_WIDTH / 2 - 160, 230);
    sfSprite_setTextureRect(play->my_sprite, play->rect);
    sfSprite_setPosition(play->my_sprite, play->position);
    play->type = PLAY;
}

static
void init_option(main_menu_t *menu, button_t *option)
{
    option->my_sprite = sfSprite_create(menu->my_texture);
    init_rect(&option->rect, 292, 320, 72);
    init_vector2f(&option->position, WINDOW_WIDTH / 2 - 160, 312);
    sfSprite_setTextureRect(option->my_sprite, option->rect);
    sfSprite_setPosition(option->my_sprite, option->position);
    option->type = OPTION;
}

static
void init_quit(main_menu_t *menu, button_t *quit)
{
    quit->my_sprite = sfSprite_create(menu->my_texture);
    init_rect(&quit->rect, 364, 320, 72);
    init_vector2f(&quit->position, WINDOW_WIDTH / 2 - 160, 394);
    sfSprite_setTextureRect(quit->my_sprite, quit->rect);
    sfSprite_setPosition(quit->my_sprite, quit->position);
    quit->type = QUIT;
}

void init_main_menu(main_menu_t *menu)
{
    menu->my_texture = sfTexture_createFromFile(MAIN_MENU_PATH, NULL);
    init_title(menu, &menu->title);
    init_play(menu, &menu->button[0]);
    init_option(menu, &menu->button[1]);
    init_quit(menu, &menu->button[2]);
    menu->button[3].my_sprite = NULL;
}
