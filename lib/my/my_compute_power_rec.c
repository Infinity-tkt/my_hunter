/*
** EPITECH PROJECT, 2026
** my_compute_power_rec.c
** File description:
** my_compute_power_rec.c
*/

#include <unistd.h>
#include <stdio.h>

int my_compute_power_rec(int nb, int p)
{
    int c = 0;

    if (p < 0)
        return 0;
    if (p == 0)
        return 1;
    if (__builtin_mul_overflow(nb, my_compute_power_rec(nb, p - 1), &c))
        return 0;
    nb = c;
    return nb;
}
