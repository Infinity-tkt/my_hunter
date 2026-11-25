/*
** EPITECH PROJECT, 2026
** my_swap.c
** File description:
** my_swap.c
*/

#include <unistd.h>

void my_swap(int *a, int *b)
{
    int ptr;

    ptr = *a;
    *a = *b;
    *b = ptr;
}
