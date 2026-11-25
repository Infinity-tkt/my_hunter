/*
** EPITECH PROJECT, 2026
** my_putnstr.c
** File description:
** my_putnstr
*/

#include <unistd.h>
#include "my.h"

int my_putnstr(char const *str, int n)
{
    if (str == NULL)
        write(1, "(null)", 6);
    write(1, str, n);
    return 0;
}
