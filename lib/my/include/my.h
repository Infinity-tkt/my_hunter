/*
** EPITECH PROJECT, 2026
** libmy
** File description:
** libmy
*/

#ifndef MY_H
    #define MY_H

int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int my_getnbr(char const *str);
int my_is_prime(int nb);
int my_isneg(int n);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_showmem(void);
int my_showstr(void);
int my_sort_int_array(void);
int my_str_isalpha(char const str);
int my_str_islower(void);
int my_str_isnum(char const str);
int my_str_isprintable(void);
int my_str_isupper(void);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
char **my_str_to_word_array(char const *str);
int my_show_word_array(char *const *tab);
char *my_strdup(char const *src);
int my_strletter(char const *str);
int my_str_isalphnum(char const str);
void my_putfloat(float nb);
int my_putnbr_base(int nbr, char const *base);
int my_countnbr_base(int nbr, char const *base);
int my_putnstr(char const *str, int n);
int my_count_nbr(int nb);
int my_putlongnbr_base(long int nbr, char const *base);
int my_countlongnbr_base(long int nbr, char const *base);
void my_put_adresse(void const *p);
int my_put_unsignednbr(unsigned int nb);
int my_putllnbr_base(long long int nbr, char const *base);
int my_countllnbr_base(long long int nbr, char const *base);
int my_put_lunsignednbr(long unsigned int nb);
int my_put_llunsignednbr(long long unsigned int nb);
int my_countsnbr_base(short int nbr, char const *base);
int my_put_sunsignednbr(short unsigned int nb);
int my_putsnbr_base(short int nbr, char const *base);
int mini_printf(const char *format, ...);
int my_putstr_error(char const *str);

#endif // MY_H
