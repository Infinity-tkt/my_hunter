/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** struct_my_hunter
*/

#ifndef STRUCT_MY_HUNTER_H
    #define STRUCT_MY_HUNTER_H
    #include "include.h"
    #include "struct_enemy.h"
    #include "struct_font.h"
    #include "struct_main_menu.h"
    #include "struct_wave.h"

typedef struct life_s {
    sfTexture *my_texture;
    sfSprite *my_sprite;
    sfIntRect rect;
    int hp;
    int hp_temp;
} life_t;

typedef struct my_clock_s {
    sfClock *clock;
    sfTime time;
    float miliseconds;
} my_clock_t;

typedef struct window_s {
    sfVideoMode video_mode;
    sfRenderWindow *wnd;
    sfEvent event;
} window_t;

typedef struct audio_s {
    sfMusic *background_audio;
    sfMusic *game_over_music;
    sfMusic *kill_sound;
} audio_t;

typedef struct score_s {
    sfText *text_score;
    sfText *text_value;
    sfVector2f position_score;
    sfVector2f position_value;
    int value;
    int best;
} score_t;

typedef struct crossair_s {
    sfTexture *my_texture;
    sfSprite *my_sprite;
    sfIntRect rect;
    sfVector2f position;
} crossair_t;


typedef struct my_hunter_s {
    window_t window;
    my_clock_t clock;
    life_t life;
    score_t score;
    int nb_enemy;
    int nb_dead_enemy;
    audio_t audio;
    crossair_t crossair;
    font_t font;
    font_t rock;
    font_t game_over;
    sfTexture *kaiju_texture;
    enemy_t *kaiju;
    main_menu_t main_menu;
    wave_t wave;
    sfFont *font_style;
    int state;
} my_hunter_t;

#endif //STRUCT_MY_HUNTER_H
