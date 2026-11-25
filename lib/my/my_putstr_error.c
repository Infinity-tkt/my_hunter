/*
** EPITECH PROJECT, 2026
** myls
** File description:
** my_putstr_error
*/

#include <unistd.h>
#include "my.h"

int my_putstr_error(char const *str)
{
    if (str == NULL)
        write(2, "(null)", 6);
    write(2, str, my_strlen(str));
    return 0;
}
