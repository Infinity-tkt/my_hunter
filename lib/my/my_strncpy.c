/*
** EPITECH PROJECT, 2026
** my_strncpy.c
** File description:
** my_strncpy.c
*/

#include <stdio.h>

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i < n) {
        dest[i] = src[i];
        i += 1;
    }
    return dest;
}
