/*
** EPITECH PROJECT, 2026
** my_putsnbr_base.c
** File description:
** my_putsnbr_base
*/

#include "my.h"

int my_putsnbr_base(short int nbr, char const *base)
{
    unsigned short int nb2 = nbr;

    if (nb2 <= my_strlen(base)){
        my_putchar(base[nb2]);
        return 0;
    }
    my_putlongnbr_base(nb2 / my_strlen(base), base);
    my_putchar(base[nb2 % my_strlen(base)]);
    return 1;
}
