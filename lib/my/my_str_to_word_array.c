/*
** EPITECH PROJECT, 2026
** my_str_to_word_array.c
** File description:
** my_str_to_word_array.c
*/

#include <stdlib.h>
#include "my.h"

static
int str_isalpha(char const str)
{
    if (!(('a' <= str && str <= 'z') || ('A' <= str && str <= 'Z')))
        return 0;
    return 1;
}

static
int str_isnum(char const str)
{
    if (!('0' <= str && str <= '9'))
        return 0;
    return 1;
}

static
int is_alphnum(char const str)
{
    if (str_isalpha(str) == 1 || str_isnum(str) == 1)
        return 1;
    return 0;
}

static
int len_word(char const *str, int start)
{
    int a;

    a = 0;
    for (int i = start; is_alphnum(str[i]) == 1; i++) {
        a += 1;
    }
    return a;
}

static
int count_word(char const *str)
{
    int nbr_of_word = 0;
    int i = 0;

    if (is_alphnum(str[i]) == 0)
        i++;
    while (str[i] != '\0') {
        if (is_alphnum(str[i]) == 0 && is_alphnum(str[i - 1]) == 1) {
            nbr_of_word++;
        }
        i++;
    }
    if ((nbr_of_word >= 0 && str[i] == '\0') && is_alphnum(str[i - 1]) == 1) {
        nbr_of_word += 1;
    }
    return nbr_of_word;
}

static
char **create_word_allocation(char **tab, int i, char const *str, int word)
{
    if (is_alphnum(str[i]) == 1 && i == 0) {
        tab[word] = malloc(sizeof(char) * (len_word(str, i) + 1));
        if (tab[word] == NULL)
            return NULL;
        tab[word][len_word(str, i)] = '\0';
    } else if (is_alphnum(str[i]) == 1 && is_alphnum(str[i - 1]) == 0) {
        tab[word] = malloc(sizeof(char) * (len_word(str, i) + 1));
        if (tab[word] == NULL)
            return NULL;
        tab[word][len_word(str, i)] = '\0';
    } else
        return 0;
    return 0;
}

static
char **add_tab(char **tab, char const *str)
{
    int i_temp = 0;
    int word = 0;
    int i = 0;

    i += (is_alphnum(str[i]) == 0) ? 1 : 0;
    for (; str[i] != '\0'; i++) {
        create_word_allocation(tab, i, str, word);
        if (is_alphnum(str[i]) == 1) {
            tab[word][i_temp] = str[i];
            i_temp++;
        }
        if (is_alphnum(str[i]) == 0 && is_alphnum(str[i - 1]) == 1) {
            word++;
            i_temp = 0;
        }
    }
    return tab;
}

char **my_str_to_word_array(char const *str)
{
    char **tab;

    if (str == NULL || my_strlen(str) == 0) {
        tab = malloc(sizeof(char **) * 1);
        if (tab == NULL)
            return NULL;
        tab[0] = NULL;
        return tab;
    }
    tab = malloc(sizeof(char **) * (count_word(str) + 1));
    if (tab == NULL)
        return NULL;
    add_tab(tab, str);
    tab[count_word(str)] = 0;
    return tab;
}
