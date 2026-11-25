/*
** EPITECH PROJECT, 2026
** my_put_nbr.c
** File description:
** my_put_nbr.c
*/

#include <unistd.h>
#include "my.h"

int my_put_nbr(int nb)
{
    long int nb2 = nb;

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
