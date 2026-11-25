/*
** EPITECH PROJECT, 2026
** my_countlongnbr_base.c
** File description:
** my_countlongnbr_base
*/

#include "my.h"

int my_countlongnbr_base(long int nbr, char const *base)
{
    unsigned long int nb2 = nbr;

    if (nb2 == 0)
        return 0;
    if (nb2 <= my_strlen(base))
        return 1;
    return 1 + my_countlongnbr_base(nb2 / my_strlen(base), base);
}
