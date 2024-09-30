NAME = libft.a

SRCS = $(wildcard *.c)

OBJECTS = $(SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra

HEADERS = $(wildcard *.h)


all: $(NAME)
	ar -rcs $(NAME) $(OBJECTS)

$(NAME):
	cc $(CFLAGS) -c $(SRCS)

%.o: %.c
	$(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean:
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
