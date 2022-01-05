NAME = Array

SRCS = main.cpp 

INCLUDES = Array.hpp

CC = clang++

FLAGS = -Wall -Wextra -Werror #-fsanitize=address -g3

all:		${NAME}

${NAME}:	${SRCS} ${INCLUDES}
			${CC} ${FLAGS} ${SRCS} -o ${NAME}

clean:
			rm -rf ${NAME}

fclean: 	clean

re:			fclean all 

.PHONY:		clean fclean re all