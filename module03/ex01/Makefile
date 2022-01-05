NAME = ScavTrap

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp

INCLUDES = ClapTrap.hpp ScavTrap.hpp

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