/*
** EPITECH PROJECT, 2026
** my_countllnbr_base.c
** File description:
** my_countllnbr_base
*/

#include "my.h"

int my_countllnbr_base(long long int nbr, char const *base)
{
    unsigned long long int nb2 = nbr;

    if (nb2 == 0)
        return 0;
    if (nb2 <= my_strlen(base))
        return 1;
    return 1 + my_countllnbr_base(nb2 / my_strlen(base), base);
}
