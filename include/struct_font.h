/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** struct_font
*/

#ifndef STRUCT_FONT_H_
    #define STRUCT_FONT_H_
    #include <CSFML/Graphics.h>
    #include <CSFML/Graphics/RenderWindow.h>
    #include <CSFML/Graphics/Sprite.h>

typedef struct font_s {
    sfTexture *my_texture;
    sfSprite *my_sprite;
} font_t;

#endif // !STRUCT_FONT_H
