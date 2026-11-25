/*
** EPITECH PROJECT, 2026
** my_str_is_alphanum
** File description:
** my_str_isalphanum
*/

#include "my.h"

int my_str_is_alphnum(char const str)
{
    if (my_str_isalpha(str) == 1 || my_str_isnum(str) == 1)
        return 1;
    return 0;
}
