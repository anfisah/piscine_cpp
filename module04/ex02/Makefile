NAME = Brain

SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

INCLUDES = Animal.hpp Dog.hpp Cat.hpp Brain.hpp

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