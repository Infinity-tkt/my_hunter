/*
** EPITECH PROJECT, 2026
** my_strncat.c
** File description:
** my_strncat.c
*/

#include <stdio.h>

char *my_strncat(char *dest, char const *src, int nb)
{
    int i_dest = 0;
    int i_src = 0;

    while (dest[i_dest] != '\0') {
        i_dest++;
    }
    while (src[i_src] != '\0' && i_src < nb) {
        dest[i_dest] = src[i_src];
        i_dest++;
        i_src++;
    }
    dest[i_dest] = '\0';
    return dest;
}
