NAME = Brain

SRCS = main.cpp

CC = clang++

FLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: 	${SRCS}
			${CC} ${FLAGS} ${SRCS} -o ${NAME}

clean:
		rm -rf ${NAME}

fclean : clean 

re : fclean all

.PHONY: clean fclean re all