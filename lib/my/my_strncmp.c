/*
** EPITECH PROJECT, 2026
** my_strncmp.c
** File description:
** my_strncmp.c
*/

#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int len1 = my_strlen(s1);
    int len2 = my_strlen(s2);

    if (n <= 0)
        return 0;
    if (s1[0] == '\0' && s2[0] == '\0')
        return 0;
    for (int i = 0; s1[i] != '\0' && s2[i] != '\0' && i < n; i++) {
        if (s1[i] != s2[i])
            return ((s1[i]) - (s2[i]));
        if (i == n - 1)
            return 0;
    }
    if (len1 > len2)
        return (s1[len2]);
    if (len1 < len2)
        return (-s2[len1]);
    return 0;
}
