/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** init_struct_my_h
*/

#include <stdio.h>
#include "include.h"

void init_vector2f(sfVector2f *vector, int x, int y)
{
    vector->x = x;
    vector->y = y;
}

static
void init_window(window_t *window)
{
    window->video_mode.bitsPerPixel = WINDOW_BPP;
    window->video_mode.size.x = WINDOW_WIDTH;
    window->video_mode.size.y = WINDOW_HEIGHT;
    window->wnd = sfRenderWindow_create(window->video_mode,
        "Hunt Kaiju", sfClose | sfResize, sfWindowed, NULL);
}

static
void init_audio(audio_t *audio)
{
    audio->background_audio = sfMusic_createFromFile(MUSIC_PATH);
    audio->game_over_music = sfMusic_createFromFile(GAME_OVER_MUSIC_PATH);
    audio->kill_sound = sfMusic_createFromFile(KILL_SOUND_PATH);
}

static
void init_gameplay(my_hunter_t *my_h)
{
    my_h->kaiju_texture = sfTexture_createFromFile(KAIJU_PATH, NULL);
    my_h->nb_enemy = 10;
    my_h->nb_dead_enemy = 0;
}

static
void init_crossair(crossair_t *crossair)
{
    crossair->my_texture = sfTexture_createFromFile(CROSSAIR_PATH, NULL);
    crossair->my_sprite = sfSprite_create(crossair->my_texture);
    init_vector2f(&crossair->position, 0, 0);
    crossair->rect.position.x = 0;
    crossair->rect.position.y = 0;
    crossair->rect.size.x = 64;
    crossair->rect.size.y = 64;
    sfSprite_setTextureRect(crossair->my_sprite, crossair->rect);
}

void init_clock(my_clock_t *clock)
{
    clock->clock = sfClock_create();
    clock->miliseconds = 0;
}

void init_life(life_t *life)
{
    sfVector2f position;

    init_vector2f(&position, 0, WINDOW_HEIGHT - 36);
    life->rect.position.x = 0;
    life->rect.position.y = 360;
    life->rect.size.x = 220;
    life->rect.size.y = 36;
    life->my_texture = sfTexture_createFromFile(LIFE_BAR_PATH, NULL);
    life->my_sprite = sfSprite_create(life->my_texture);
    life->hp = HP_MAX;
    life->hp_temp = life->hp;
    sfSprite_setPosition(life->my_sprite, position);
}

int init_struct(my_hunter_t *my_h)
{
    sfVector2f scale_font = {0.8, 1.05};
    sfVector2f scale_rock = {1, 1.12};

    init_window(&my_h->window);
    init_clock(&my_h->clock);
    init_life(&my_h->life);
    init_audio(&my_h->audio);
    init_gameplay(my_h);
    if (init_enemy(my_h) == ERROR_EXIT)
        return ERROR_EXIT;
    init_crossair(&my_h->crossair);
    init_font(&my_h->font, BACKGROUND_PATH, &scale_font);
    init_font(&my_h->rock, BACKGROUND_ROCK_PATH, &scale_rock);
    init_font(&my_h->game_over, GAME_OVER_PATH, &scale_font);
    init_main_menu(&my_h->main_menu);
    my_h->font_style = sfFont_createFromFile(FONT_PATH);
    init_wave(my_h, &my_h->wave);
    init_score(my_h, &my_h->score);
    my_h->state = MAIN_MENU;
    return SUCCESS_EXIT;
}
