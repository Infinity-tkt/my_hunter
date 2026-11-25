##
## EPITECH PROJECT, 2026
## Makefile
## File description:
## test Makefile
##

CC	= 	 clang

CFLAGS 	=	-Iinclude/

LDFLAGS  = 	-Llib/my

LDLIBS   = 	-lmy

GFLAGS	=	-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

SRC 	=	src/my_hunter.c	\
			src/display/enemy_animation.c	\
			src/display/display_all_game.c	\
			src/display/display_font.c	\
			src/display/display_enemy.c	\
			src/display/display_life.c	\
			src/display/display_main_menu.c	\
			src/display/display_sprite.c	\
			src/display/display_crossair.c	\
			src/display/draw_nb.c	\
			src/init/init_struct_my_h.c	\
			src/init/init_font.c	\
			src/init/init_enemy.c	\
			src/init/init_in_game.c	\
			src/init/init_main_menu.c	\
			src/init/init_wave.c	\
			src/init/init_score.c	\
			src/action/analyse_event_game.c	\
			src/action/analyse_event_game_over.c	\
			src/action/analyse_event_main_menu.c	\
			src/action/manage_mouse_click_game.c	\
			src/action/manage_mouse_click_main_menu.c	\
			src/audio/play_background_music.c	\
			src/audio/play_game_over_music.c	\
			src/movement/move_enemy.c	\
			src/destroy/destroy_kaiju.c	\
			src/destroy/destroy_clock.c	\
			src/destroy/destroy_main_menu.c	\
			src/destroy/destroy_life.c	\
			src/destroy/destroy_font.c	\
			src/destroy/destroy_wave.c	\
			src/destroy/destroy_score.c	\
			src/destroy/destroy_window.c	\
			src/destroy/destroy_music.c	\
			src/destroy/destroy_all.c	\
			src/destroy/destroy_crossair.c	\
			src/flags/flag_h.c	\
			src/menu/game.c	\
			src/menu/game_over_menu.c	\
			src/menu/main_menu.c	\
			src/menu/wave_menu.c	\
			src/action/store_best_score.c	\

OBJ_DIR	=	obj

OBJ	 = 	$(SRC:src/%.c=$(OBJ_DIR)/%.o)

NAME	 = 	my_hunter

all: 	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my/
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS) $(LDLIBS) $(GFLAGS)

$(OBJ_DIR)/%.o: src/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

.NOTPARALLEL: debug
debug: CFLAGS += -g
debug: fclean $(OBJ)
	make -C lib/my/
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS) $(LDLIBS) $(GFLAGS)

.NOTPARALLEL: codingstyle
codingstyle: CC = epiclang
codingstyle: CFLAGS += -Wall -Wextra -Werror
codingstyle: fclean $(OBJ)
	make -C lib/my/
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS) $(LDLIBS) $(GFLAGS)

.NOTPARALLEL: fanalyzer
fanalyzer: CC = gcc -fanalyzer
fanalyzer: fclean $(OBJ)
	make -C lib/my/
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS) $(LDLIBS) $(GFLAGS)

clean:
	rm -rf $(OBJ_DIR)
	make clean -C lib/my/

fclean: clean
	rm -rf $(NAME)
	rm -rf ./$(NAME)
	make fclean -C lib/my

.NOTPARALLEL: re
re: 	fclean all

.PHONY: all debug codingstyle clean fclean re
