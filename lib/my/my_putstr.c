/*
** EPITECH PROJECT, 2026
** my_putstr.c
** File description:
** my_putstr.c
*/

#include <unistd.h>
#include "my.h"

int my_putstr(char const *str)
{
    if (str == NULL)
        write(1, "(null)", 6);
    write(1, str, my_strlen(str));
    return 0;
}
