/*
** EPITECH PROJECT, 2026
** my_strcapitalize.c
** File description:
** my_strcapitalize.c
*/

#include <stdio.h>

static
void verrif(char *str, int i)
{
    if (i == 0 || (str[i - 1] >= 32 && str[i - 1] <= 47)) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    } else if (str[i] >= 'A' && str[i] <= 'Z')
        str[i] += 32;
}

char *my_strcapitalize(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        verrif(str, i);
    return str;
}
