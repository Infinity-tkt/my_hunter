/*
** EPITECH PROJECT, 2026
** my_putoctal.c
** File description:
** my_putoctal
*/

#include "my.h"

int my_putnbr_base(int nbr, char const *base)
{
    unsigned int nb2 = nbr;
    int q = 0;

    if (nb2 >= my_strlen(base)) {
        q = nb2 / my_strlen(base);
        nb2 %= my_strlen(base);
        my_putnbr_base(q, base);
    }
    my_putchar(base[nb2]);
    return 0;
}
