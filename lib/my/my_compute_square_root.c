/*
** EPITECH PROJECT, 2026
** my_compute_square_root.c
** File description:
** my_compute_square_root.c
*/

#include <unistd.h>
#include <stdio.h>

int my_compute_square_root(int nb)
{
    int i = 2;

    if (nb == 1)
        return 1;
    while (i * i != nb) {
        if (i > nb / 2)
            return 0;
        i += 1;
    }
    return i;
}
