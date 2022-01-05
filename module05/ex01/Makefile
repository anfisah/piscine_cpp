NAME = Form

SRCS = main.cpp Bureaucrat.cpp Form.cpp

INCLUDES = Bureaucrat.hpp Form.hpp

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