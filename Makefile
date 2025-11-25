NAME = minishell
CC = cc
CFLAGS = -Wall -Werror -Wextra
LIB_FLAGS = -lreadline -lhistory
HEADER = minishell.h
SRCS = main.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(HEADER) $(OBJS)
	$(CC) $(CFLAGS) $(LIB_FLAGS) $(OBJS) -o $(NAME)

clean:
	rm $(OBJS)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
