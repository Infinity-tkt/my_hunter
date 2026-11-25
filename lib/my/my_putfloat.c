/*
** EPITECH PROJECT, 2026
** my_putfloat
** File description:
** my_putfloat
*/

#include "my.h"
#include <stdio.h>

void my_putfloat(float nb)
{
    int entier;
    int decimal;

    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    entier = (int)nb;
    my_put_nbr(entier);
    my_putchar('.');
    decimal = (int)((nb - entier) * 10000000);
    if (decimal % 10 > 4)
        decimal += 10;
    decimal /= 10;
    my_put_nbr(decimal);
}
