CC = cc
CFLAGS = -Werror -Wextra -Wall -g3
MLX_FLAGS = -Lmlx_linux -lmlx_Linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz

NAME = so_long

SRC = \
	main.c \
	texture/texture_ft.c \
	window/window_ft.c \
	background/background_ft.c \
	sprites/sprite_ft.c \
	player/player_ft.c \
	map_read/get_info.c \
	map_read/map_read.c \
	map_read/read_map_from_file.c \
	utils/parse_utils.c \
	utils/char_utils.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) Makefile
	@echo "\033[32m scrs compiled \033[0m"
	@$(CC) $(CFLAGS) $(OBJ) $(MLX_FLAGS) -o $(NAME)
	@echo "\033[32m so_long created \033[0m"

%.o: %.c so_long.h
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "\033[0;31m objs removed \033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[0;31m so_long removed \033[0m"

re: fclean all
