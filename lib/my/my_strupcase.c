/*
** EPITECH PROJECT, 2026
** my_strupcase.c
** File description:
** my_strupcase.c
*/

#include <stdio.h>

char *my_strupcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
    return str;
}
