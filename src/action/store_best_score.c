/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** store_best_score
*/

#include "include.h"
#include "../../lib/my/include/my.h"
#include <stdio.h>

static
void my_putchar_file(char c, int fd)
{
    write(fd, &c, 1);
}

static
int my_put_nbr_file(int nb, int fd)
{
    long int nb2 = nb;

    if (nb2 < 0) {
        nb2 *= -1;
        my_putchar_file('-', fd);
    }
    if (nb2 <= 9){
        my_putchar_file('0' + nb2, fd);
        return 0;
    }
    my_put_nbr_file(nb2 / 10, fd);
    my_putchar_file('0' + (nb2 % 10), fd);
    return 1;
}

void store_best_score(my_hunter_t *my_h)
{
    int fd = 0;

    if (my_h->score.best < my_h->score.value) {
        fd = open(BEST_SCORE_PATH, O_TRUNC | O_RDWR);
        if (fd == -1)
            return;
        my_h->score.best = my_h->score.value;
        my_put_nbr_file(my_h->score.best, fd);
        close(fd);
    }
    my_h->score.value = 0;
}
