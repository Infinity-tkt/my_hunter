/*
** EPITECH PROJECT, 2026
** my_strcmp.c
** File description:
** my_strcmp.c
*/

#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int len1 = my_strlen(s1);
    int len2 = my_strlen(s2);

    for (int indice = 0; s1[indice] != '\0' && s2[indice] != '\0'; indice++) {
        if (s1[indice] != s2[indice])
            return ((s1[indice]) - (s2[indice]));
    }
    if (len1 > len2)
        return (s1[len2]);
    if (len1 < len2)
        return (-s2[len1]);
    return 0;
}
