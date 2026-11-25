##
## EPITECH PROJECT, 2026
## Makefile
## File description:
## Makefile
##

CC	=	clang

SRC	=	my_compute_power_rec.c		\
		my_compute_square_root.c	\
		my_find_prime_sup.c		\
		my_getnbr.c			\
		my_is_prime.c			\
		my_isneg.c			\
		my_put_nbr.c			\
		my_putchar.c			\
		my_putstr.c			\
		my_revstr.c			\
		my_show_word_array.c		\
		my_showmem.c			\
		my_showstr.c			\
		my_sort_int_array.c		\
		my_str_isalpha.c		\
		my_str_islower.c		\
		my_str_isnum.c			\
		my_str_isprintable.c		\
		my_str_isupper.c		\
		my_str_to_word_array.c		\
		my_strcapitalize.c		\
		my_strcat.c			\
		my_strcmp.c			\
		my_strcpy.c			\
		my_strdup.c			\
		my_strlen.c			\
		my_strlowcase.c			\
		my_strncat.c			\
		my_strncmp.c			\
		my_strncpy.c			\
		my_strstr.c			\
		my_strupcase.c			\
		my_swap.c			\
		my_str_isalphanum.c		\
		my_strletter.c			\
		my_putfloat.c			\
		my_putnbr_base.c		\
		my_countnbr_base.c		\
		my_putnstr.c		\
		my_countnbr.c		\
		my_putlongnbr_base.c	\
		my_countlongnbr_base.c	\
		my_put_adresse.c	\
		my_put_unsignednbr.c	\
		my_putllnbr_base.c		\
		my_countllnbr_base.c	\
		my_put_lunsignednbr.c	\
		my_put_llunsignednbr.c	\
		my_put_sunsignednbr.c	\
		my_putsnbr_base.c		\
		my_countsnbr_base.c		\
		mini_printf.c		\
		my_putstr_error.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Iinclude/

NAME	=	libmy.a

H_NAME	=	my.h

all:	$(NAME)

$(NAME):	$(OBJ)
	ar cr $(NAME) $(OBJ)

.NOTPARALLEL: debug
debug: CFLAGS += -g
debug: fclean $(OBJ)
	ar cr $(NAME) $(OBJ)

.NOTPARALLEL: codingstyle
codingstyle: CC = epiclang
codingstyle: CFLAGS += -Wall -Wextra
codingstyle: fclean $(OBJ)
	ar cr $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

.NOTPARALLEL: re
re:	fclean all

.PHONY: all clean fclean re
