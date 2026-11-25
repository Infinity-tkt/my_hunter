/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** flag_h
*/

#include "include.h"
#include "../../lib/my/include/my.h"

static
char *my_memset(char *buff)
{
    for (int i = 0; i < 33; i++)
        buff[i] = 0;
    return buff;
}

int check_h_option(char **av)
{
    char buff[33] = {0};
    int fd = 0;
    int size = 0;

    if (my_strlen(av[1]) > 2 || my_strlen(av[1]) < 2)
        return ERROR_EXIT;
    if (av[1][1] != 'h')
        return ERROR_EXIT;
    fd = open("src/description_file.txt", O_RDONLY);
    if (fd == -1)
        return ERROR_EXIT;
    size = read(fd, buff, 32);
    while (size > 0) {
        my_putstr(buff);
        my_memset(buff);
        size = read(fd, buff, 32);
    }
    close(fd);
    return SUCCESS_EXIT;
}
