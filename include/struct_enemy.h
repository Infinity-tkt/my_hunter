/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** sturct_enemy
*/

#ifndef STRUCT_ENEMY_H_
    #define STRUCT_ENEMY_H_
    #include <CSFML/Graphics.h>
    #include <CSFML/Graphics/RenderWindow.h>
    #include <CSFML/Graphics/Sprite.h>

typedef struct enemy_s {
    sfSprite *my_sprite;
    sfVector2f movement;
    sfVector2f base;
    sfIntRect rect;
    float speed;
    int is_alive;
    int point;
} enemy_t;

#endif // !STURCT_ENEMY_H
