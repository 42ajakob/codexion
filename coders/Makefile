NAME			=	codexion

CFLAGS			=	-Wall -Wextra -Werror -pthread

SRCS			=	main.c \
					validate_args.c \
					parse_args.c \
					coder_loop.c \
					utils.c

OBJS_DIR		=	objects/
OBJS			=	${SRCS:%.c=$(OBJS_DIR)/%.o}

all: $(NAME)


$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR)/%.o: %.c
	@mkdir -p $(OBJS_DIR)
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
