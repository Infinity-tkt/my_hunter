/*
** EPITECH PROJECT, 2026
** my_strletter
** File description:
** my_strletter
*/

#include "my.h"

int my_strletter(char const *str)
{
    int a;

    a = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (my_str_isalpha(str[i]) == 1)
            a += 1;
    }
    return a;
}
