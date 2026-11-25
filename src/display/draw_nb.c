/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** draw_nb
*/

#include "include.h"
#include <stdio.h>
#include <stdlib.h>

static
int count_nbr(int nb)
{
    int total = 1;
    int nb_d = nb;

    if (nb < 0) {
        total++;
        nb *= -1;
    }
    while (nb_d >= 10) {
        nb_d = nb_d / 10;
        total += 1;
    }
    return total;
}

static
int power(int nb, int p)
{
    for (int i = 0; i < p; i++)
        nb *= 10;
    return nb;
}

static
void fill_buffer(char *buff, int nb, int size)
{
    int i = 0;
    int div = 0;

    if (nb < 0) {
        buff[i] = '-';
        nb = -nb;
        div = power(1, size - 2);
        i++;
    } else
        div = power(1, size - 1);
    for (; i < size; i++) {
        buff[i] = '0' + ((nb / div) % 10);
        div /= 10;
    }
    buff[i] = '\0';
}

void draw_nb(sfRenderWindow *window, sfText *text, int nb)
{
    int size = count_nbr(nb);
    char *buff;

    buff = malloc(sizeof(char) * (size + 1));
    if (buff == NULL)
        return;
    fill_buffer(buff, nb, size);
    sfText_setString(text, buff);
    sfRenderWindow_drawText(window, text, NULL);
    free(buff);
}
