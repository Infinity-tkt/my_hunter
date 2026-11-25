/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** destroy_score
*/

#include "include.h"

void destroy_score(score_t *score)
{
    if (score->text_score)
        sfText_destroy(score->text_score);
    if (score->text_value)
        sfText_destroy(score->text_value);
}
