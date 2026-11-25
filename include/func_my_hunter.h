/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** func_my_hunter
*/

#ifndef FUNC_MY_HUNTER_H_
    #define FUNC_MY_HUNTER_H_
    #include "struct_my_hunter.h"

void enemy_animation(enemy_t *kaiju);
void display_all_game(my_hunter_t *my_h);
void display_font(my_hunter_t *my_h, font_t *font);
void display_enemy(my_hunter_t *my_h, enemy_t *kaiju);
void display_life(my_hunter_t *my_h);
void display_main_menu(my_hunter_t *my_h);
void display_sprite(sfRenderWindow *wnd, sfSprite *my_sprite);
void display_crossair(my_hunter_t *my_h, crossair_t *crossair);
void draw_nb(sfRenderWindow *window, sfText *text, int nb);
int init_struct(my_hunter_t *my_h);
void init_font(font_t *font, char *path_file, sfVector2f *scale);
int init_enemy(my_hunter_t *my_h);
void init_life(life_t *life);
void init_clock(my_clock_t *clock);
void init_base_position(enemy_t *kaiju);
void init_in_game(my_hunter_t *my_h);
void init_main_menu(main_menu_t *menu);
void init_vector2f(sfVector2f *vector, int x, int y);
void init_wave(my_hunter_t *my_h, wave_t *wave);
void init_score(my_hunter_t *my_h, score_t *score);
void init_movement(my_hunter_t *my_h, enemy_t *kaiju);
void analyse_events_game(my_hunter_t *my_h);
void analyse_events_game_over(my_hunter_t *my_h);
void analyse_events_main_menu(my_hunter_t *my_h);
void manage_mouse_click_game(my_hunter_t *my_h);
void manage_mouse_click_main_menu(my_hunter_t *my_h);
void move_enemy(my_hunter_t *my_h, enemy_t *kaiju);
void play_background_music(audio_t *music);
void play_game_over_music(audio_t *music);
void destroy_kaiju(my_hunter_t *my_h);
void destroy_clock(my_clock_t *clock);
void destroy_main_menu(main_menu_t *main_menu);
void destroy_life(life_t *life);
void destroy_font(font_t *font);
void destroy_wave(wave_t *wave);
void destroy_score(score_t *score);
void destroy_window(window_t *window);
void destroy_music(audio_t *audio);
void destroy_crossair(crossair_t *crossair);
void destroy_all(my_hunter_t *my_h);
int check_h_option(char **av);
void game(my_hunter_t *my_h);
void game_over_menu(my_hunter_t *my_h);
void main_menu(my_hunter_t *my_h);
void wave_menu(my_hunter_t *my_h);
void store_best_score(my_hunter_t *my_h);

#endif // !FUNC_MY_HUNTER_H
