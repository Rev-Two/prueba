NAME= libft.a
GCC= gcc
FLAGS= -Wall -Werror -Wextra

all: ${NAME}

${NAME}: ft_*.c
	${GCC} ${FLAGS} -c ft_*.c
	ar -v -q ${NAME} ft_*.o

clean: ft_*.o
	rm ft_*.o

fclean: clean
	rm ${NAME}

re: fclean all

.PHONY: re fclean clean all
