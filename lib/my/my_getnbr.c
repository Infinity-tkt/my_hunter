/*
** EPITECH PROJECT, 2026
** my_getnbr.c
** File description:
** emacs
*/

#include <unistd.h>
#include <stdio.h>
#include <stddef.h>

static
int power(int a)
{
    int nb = 1;
    int c = 0;

    for (int i = 1; i <= a; i++) {
        if (__builtin_mul_overflow(nb, 10, &c)) {
            return -1;
        }
        nb = c;
        c = 0;
    }
    return nb;
}

static
int calcul(int *total, char *nb, int nb_i, int j)
{
    int c = 0;
    int e = 0;
    int chiffre = nb[j] - 48;
    int power_int = power(nb_i - j - 1);

    if (chiffre == 0)
        return 0;
    if (power_int == -1)
        return -1;
    if (__builtin_mul_overflow(-chiffre, power_int, &c))
        return -1;
    if (__builtin_add_overflow(*total, c, &e))
        return -1;
    *total = e;
    return 0;
}

int my_strlen2(char const *str)
{
    int a = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        a += 1;
    }
    return a;
}

int test_char(char const *str, char *nb, int *nb_i, int i)
{
    if (48 <= str[i] && str[i] <= 58) {
        nb[*nb_i] = str[i];
        *nb_i += 1;
    } else if (*nb_i != 0) {
        return 1;
    }
    return 0;
}

int calcul_n(char const *str)
{
    int signe = -1;

    for (int i = 0; str[i] != '\0' && !('0' <= str[i] && '9' >= str[i]); i++) {
        if (str[i] == '-')
            signe *= -1;
    }
    return signe;
}

int my_getnbr(char const *str)
{
    int total = 0;
    char nb[my_strlen2(str) + 1];
    int nb_i = 0;
    int overflow = 0;

    for (int i = 0; str[i] != '\0'; i++)
        if (test_char(str, nb, &nb_i, i))
            break;
    for (int j = 0; j < nb_i; j++)
        if (calcul(&total, nb, nb_i, j) == -1)
            return 0;
    if (__builtin_mul_overflow(total, calcul_n(str), &overflow))
        return 0;
    total = overflow;
    return total;
}
