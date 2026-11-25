/*
** EPITECH PROJECT, 2026
** my_revstr.c
** File description:
** my_revstr.c
*/

#include <stdio.h>

static
int my_strlen(char const *str)
{
    int a;

    a = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        a += 1;
    }
    return a;
}

char *my_revstr(char *str)
{
    int i = 0;
    int max = my_strlen(str);
    char final[max + 1];

    while (i <= max - 1) {
        final[i] = str[(max - 1) - i];
        i += 1;
    }
    i = 0;
    while (i <= max - 1) {
        str[i] = final[i];
        i += 1;
    }
    return str;
}
