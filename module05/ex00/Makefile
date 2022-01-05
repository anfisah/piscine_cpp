NAME = Bureaucrat

SRCS = main.cpp Bureaucrat.cpp

INCLUDES = Bureaucrat.hpp

CC = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98

all:		${NAME}

${NAME}:	${SRCS} ${INCLUDES}
			${CC} ${FLAGS} ${SRCS} -o ${NAME}

clean:
			rm -rf ${NAME}

fclean: 	clean

re:			fclean all 

.PHONY:		clean fclean re all