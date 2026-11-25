/*
** EPITECH PROJECT, 2026
** mini_printf
** File description:
** mini_printf
*/

#include "my.h"
#include <stdarg.h>
#include <stdio.h>

static
int increase(int *point_i)
{
    *point_i += 1;
    return 1;
}

int second_flags(const char *format, int *point_i, va_list list, int *count)
{
    if (format[*point_i + 1] == 'c') {
        *count += 1;
        my_putchar(va_arg(list, int));
        return increase(point_i);
    }
    if (format[*point_i + 1] == '%') {
        *count += 1;
        my_putchar('%');
        return increase(point_i);
    }
    my_putchar('%');
    return -1;
}

static
int count_nbr(int nb)
{
    int total = 1;
    int nb_d = nb;

    if (nb < 0)
        total += 1;
    while (nb_d > 10) {
        nb_d = nb_d / 10;
        total += 1;
    }
    return total;
}

static
int flags(const char *format, int *point_i, va_list list, int *count)
{
    int var_int;
    char *var_str;

    if (format[*point_i + 1] == 'i' || format[*point_i + 1] == 'd') {
        var_int = va_arg(list, int);
        *count += count_nbr(var_int);
        my_put_nbr(var_int);
        return increase(point_i);
    }
    if (format[*point_i + 1] == 's') {
        var_str = va_arg(list, char*);
        *count += my_strlen(var_str);
        my_putstr(var_str);
        return increase(point_i);
    }
    second_flags(format, point_i, list, count);
    return -1;
}

static
int verrif(const char *format)
{
    if (my_strlen(format) == 0)
        return -1;
    if (my_strlen(format) == 1) {
        my_putstr(format);
        return 1;
    }
    return 0;
}

int mini_printf(const char *format, ...)
{
    va_list list;
    int i = 0;
    int *point_i = &i;
    int count = 0;
    int var_verrif = verrif(format);

    if (var_verrif != 0)
        return var_verrif;
    va_start(list, format);
    for (; format[i] != '\0'; i++) {
        if (format[i] != '%') {
            count++;
            my_putchar(format[i]);
        }
        if (format[i] == '%') {
            flags(format, point_i, list, &count);
        }
    }
    va_end(list);
    return count;
}
