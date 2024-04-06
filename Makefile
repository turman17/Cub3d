CC = cc
RM = rm -f

NAME = cub3D

LIBFTDIR = ./libft
LIBFT = $(LIBFTDIR)/libft.a

INCLUDE_DIR = includes
SRCDIR = srcs
OBJDIR = objs
SRCS = 	check_map.c close_and_free.c drawing_utils.c init_map.c key_and_moving.c main.c moving.c \
		raycaster_calculations.c raycaster_ray_dir.c raycaster.c read_map.c start_game.c utils.c \

OBJS = $(patsubst %.c,$(OBJDIR)/%.o,$(SRCS))

CFLAGS = -Wall -Werror -Wextra -g -I$(INCLUDE_DIR) #-fsanitize=address
LDFLAGS = -L$(LIBMLXDIR) -lmlx -L/usr/X11R6/lib -lXext -lX11 -lm# -fsanitize=address
LIBMLXDIR = ./minilibx-linux

LIBMLX = $(LIBMLXDIR)/libmlx.a

all: $(NAME)

$(NAME): $(LIBFT) $(LIBMLX) $(OBJS)
	@$(CC) $(OBJS) $(LIBFT) $(LDFLAGS) -o $(NAME)
	@echo "\033[0;32m✅---COMPILING IS DONE---✅\033[0m"

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	@make -sC $(LIBFTDIR)

$(LIBMLX):
	@make -sC $(LIBMLXDIR)

clean:
	@$(RM) $(OBJS)
	@make -sC $(LIBFTDIR) clean

fclean: clean
	@$(RM) $(NAME)
	@make -sC $(LIBFTDIR) fclean

re: fclean all
