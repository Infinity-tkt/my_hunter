/*
** EPITECH PROJECT, 2026
** my_isneg.c
** File description:
** met un N si negatic et P si positif
*/

#include <unistd.h>
#include "my.h"

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
    return 0;
}
