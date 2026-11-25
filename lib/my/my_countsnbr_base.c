/*
** EPITECH PROJECT, 2026
** my_countsnbr_base.c
** File description:
**  my_countsnbr_base
*/

#include "my.h"

int my_countsnbr_base(short int nbr, char const *base)
{
    unsigned short int nb2 = nbr;

    if (nb2 == 0)
        return 0;
    if (nb2 <= my_strlen(base))
        return 1;
    return 1 + my_countsnbr_base(nb2 / my_strlen(base), base);
}
