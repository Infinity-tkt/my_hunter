/*
** EPITECH PROJECT, 2026
** my_put_adresse.c
** File description:
** my_put_adresse
*/

#include <unistd.h>
#include "my.h"

void my_put_adresse(void const *p)
{
    long adr = (long)p;

    write(1, "0x", 2);
    my_putlongnbr_base(adr, "0123456789abcdef");
}
