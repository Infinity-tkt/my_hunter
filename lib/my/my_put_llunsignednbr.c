/*
** EPITECH PROJECT, 2026
** my_put_llunsignednbr.c
** File description:
** my_put_llunsignednbr
*/

#include "my.h"

int my_put_llunsignednbr(long long unsigned int nb)
{
    long long unsigned int nb2 = nb;

    if (nb2 < 0) {
        nb2 *= -1;
        my_putchar('-');
    }
    if (nb2 <= 9){
        my_putchar('0' + nb2);
        return 0;
    }
    my_put_llunsignednbr(nb2 / 10);
    my_putchar('0' + (nb2 % 10));
    return 1;
}
