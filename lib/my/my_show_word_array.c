/*
** EPITECH PROJECT, 2026
** my_show_word_array.c
** File description:
** my_show_word_array.c
*/

#include <stdlib.h>
#include "my.h"

int my_show_word_array(char *const *tab)
{
    char *str;

    for (int i = 0; tab[i] != 0; i++) {
        str = malloc(sizeof(char) * my_strlen(tab[i]) + 1);
        if (str == NULL)
            return 84;
        my_strcpy(str, tab[i]);
        my_putstr(str);
        my_putchar('\n');
        free(str);
    }
    return 0;
}
