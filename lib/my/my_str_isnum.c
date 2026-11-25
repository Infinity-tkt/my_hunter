/*
** EPITECH PROJECT, 2026
** my_str_isnum.c
** File description:
** my_str_isnum.c
*/

int my_str_isnum(char const str)
{
    if (!('0' <= str && str <= '9'))
        return 0;
    return 1;
}
