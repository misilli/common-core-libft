NAME = libft.a
CC = cc
SRC = ${wildcard *.c}
OBJ = ${SRC:.c=.o}
CFLAGS = -Wall -Wextra -Werror
RM = rm -f


all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) ${OBJ}
fclean:
	$(RM) ${OBJ}
	$(RM) ${NAME}

re: fclean all

.PHONY: all clean fclean re