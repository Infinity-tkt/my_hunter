/*
** EPITECH PROJECT, 2026
** my_strstr.c
** File description:
** my_strstr.c
*/

#include <stdlib.h>
#include "my.h"

static
int search(int i, char *str, char const *m)
{
    for (int y = 1; m[y] != '\0'; y++) {
        if (str[i + y] == '\0')
            return 0;
        if (str[i + y] != m[y])
            return 0;
    }
    return 1;
}

char *my_strstr(char *str, char const *to_find)
{
    char *dest;
    int boolean = 0;

    if (to_find[0] == '\0')
        return str;
    for (int i = 0; i < my_strlen(str); i++) {
        if (str[i] == to_find[0]) {
            dest = &str[i];
            boolean = search(i, str, to_find);
        }
        if (boolean == 1)
            return dest;
    }
    return NULL;
}
