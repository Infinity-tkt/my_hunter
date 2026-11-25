/*
** EPITECH PROJECT, 2026
** my_countnbr_base.c
** File description:
** my_countnbr_base
*/

#include "my.h"

int my_countnbr_base(int nbr, char const *base)
{
    unsigned int nb2 = nbr;

    if (nb2 == 0)
        return 0;
    if (nb2 <= my_strlen(base))
        return 1;
    return 1 + my_countnbr_base(nb2 / my_strlen(base), base);
}
