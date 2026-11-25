/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** struct_main_menu
*/

#ifndef STRUCT_MAIN_MENU_H_
    #define STRUCT_MAIN_MENU_H_
    #include "include.h"

typedef enum {
    PLAY,
    OPTION,
    QUIT
} type_t;

typedef struct button_s {
    sfSprite *my_sprite;
    sfIntRect rect;
    sfVector2f position;
    type_t type;
} button_t;

typedef struct title_s {
    sfSprite *my_sprite;
    sfIntRect rect;
    sfVector2f position;
} title_t;

typedef struct main_menu_s {
    sfTexture *my_texture;
    title_t title;
    button_t button[4];
} main_menu_t;


#endif //!STRUCT_MAIN_MENU_H_
