/*
** EPITECH PROJECT, 2026
** my_put_unsignednbr.c
** File description:
** my_put_unsignednbr
*/

#include "my.h"

int my_put_unsignednbr(unsigned int nb)
{
    long unsigned int nb2 = nb;

    if (nb2 < 0) {
        nb2 *= -1;
        my_putchar('-');
    }
    if (nb2 <= 9){
        my_putchar('0' + nb2);
        return 0;
    }
    my_put_nbr(nb2 / 10);
    my_putchar('0' + (nb2 % 10));
    return 1;
}
