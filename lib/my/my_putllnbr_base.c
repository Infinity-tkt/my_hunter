/*
** EPITECH PROJECT, 2026
** my_putllnbr_base.c
** File description:
**  my_putllnbr_base
*/

#include "my.h"

int my_putllnbr_base(long long int nbr, char const *base)
{
    unsigned long long int nb2 = nbr;

    if (nb2 <= my_strlen(base)){
        my_putchar(base[nb2]);
        return 0;
    }
    my_putllnbr_base(nb2 / my_strlen(base), base);
    my_putchar(base[nb2 % my_strlen(base)]);
    return 1;
}
