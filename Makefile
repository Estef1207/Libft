NAME = libft.a

SRCS = $(wildcard *.c)

OBJECTS = $(SRCS:.c=.o)

CFLAGS = cc -Wall -Werror -Wextra


all: $(NAME)


$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c
	$(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
