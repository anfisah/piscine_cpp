NAME = Iter

SRCS = main.cpp 

INCLUDES = Iter.hpp

CC = clang++

FLAGS = -Wall -Wextra -Werror

all:		${NAME}

${NAME}:	${SRCS} ${INCLUDES}
			${CC} ${FLAGS} ${SRCS} -o ${NAME}

clean:
			rm -rf ${NAME}

fclean: 	clean

re:			fclean all 

.PHONY:		clean fclean re all