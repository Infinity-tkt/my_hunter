/*
** EPITECH PROJECT, 2026
** my_str_isalpha.c
** File description:
** my_str_isalpha.c
*/

int my_str_isalpha(char const str)
{
    if (!(('a' <= str && str <= 'z') || ('A' <= str && str <= 'Z')))
        return 0;
    return 1;
}
