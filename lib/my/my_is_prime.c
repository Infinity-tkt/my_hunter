/*
** EPITECH PROJECT, 2026
** my_is_prime.c
** File description:
** my_is_prime.c
*/

#include <unistd.h>
#include <stdio.h>

int my_is_prime(int nb)
{
    if (nb <= 1)
        return 0;
    for (int indice = 2; indice <= (nb / 2) - (nb % 2); indice++)
        if (nb % indice == 0)
            return 0;
    return 1;
}
