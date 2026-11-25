/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** init_score
*/

#include "include.h"
#include "../../lib/my/include/my.h"

static
void init_position_score(my_hunter_t *my_h, score_t *score)
{
    sfVector2u size = {0};
    unsigned int size_text = 0;
    int x = 0;
    int y = 0;

    size = sfRenderWindow_getSize(my_h->window.wnd);
    size_text = sfText_getCharacterSize(score->text_score);
    x = size.x - (size_text * 10);
    y = size.y - (size_text + 10);
    init_vector2f(&score->position_score, x, y);
    sfText_setPosition(score->text_score, score->position_score);
}

static
void init_position_value(score_t *score)
{
    int size = 0;
    int x = 0;
    int y = score->position_score.y;

    size = sfText_getCharacterSize(score->text_score);
    x = score->position_score.x + (size * 3);
    init_vector2f(&score->position_value, x, y);
    sfText_setPosition(score->text_value, score->position_value);
}

void init_score(my_hunter_t *my_h, score_t *score)
{
    char buff[33] = {0};
    int fd = 0;

    fd = open(BEST_SCORE_PATH, O_RDONLY);
    if (fd == -1)
        return;
    read(fd, buff, 32);
    score->best = my_getnbr(buff);
    close(fd);
    score->text_score = sfText_create(my_h->font_style);
    score->text_value = sfText_create(my_h->font_style);
    sfText_setString(score->text_score, "Score: ");
    init_position_score(my_h, score);
    init_position_value(score);
    score->value = 0;
}
