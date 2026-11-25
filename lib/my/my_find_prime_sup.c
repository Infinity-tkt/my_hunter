/*
** EPITECH PROJECT, 2026
** my_find_prime_sup.c
** File description:
** my_find_prime_sup.c
*/

#include <stdio.h>

static
int prime(int nb)
{
    if (nb <= 2)
        return 0;
    for (int indice = 2; indice <= nb / 2 - (nb % 2); indice++)
        if (nb % indice == 0)
            return 0;
    return 1;
}

int my_find_prime_sup(int nb)
{
    int i = nb;

    if (nb <= 2)
        return 2;
    while (prime(i) != 1)
        i += 1;
    return i;
}
