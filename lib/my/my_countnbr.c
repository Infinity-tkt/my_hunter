/*
** EPITECH PROJECT, 2026
** my_countnbr.c
** File description:
** my_countnbr.c
*/

int my_count_nbr(int nb)
{
    int total = 1;
    int nb_d = nb;

    if (nb < 0) {
        total++;
        nb *= -1;
    }
    while (nb_d >= 10) {
        nb_d = nb_d / 10;
        total += 1;
    }
    return total;
}
