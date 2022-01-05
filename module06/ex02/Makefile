NAME = Conversion

SRCS = main.cpp Base.cpp

INCLUDES = Base.hpp

CC = clang++

FLAGS = -Wall -Wextra -Werror #-std=c++98 -Wno-conversion

all:		${NAME}

${NAME}:	${SRCS} ${INCLUDES}
			${CC} ${FLAGS} ${SRCS} -o ${NAME}

clean:
			rm -rf ${NAME}

fclean: 	clean

re:			fclean all 

.PHONY:		clean fclean re all