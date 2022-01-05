NAME = zombie

SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

CC = clang++

FLAGS = -Wall -Wextra -Werror

all: 		${NAME}

${NAME} :	${SRCS}
			${CC} ${FLAGS} ${SRCS} -o ${NAME}

clean: 
			rm -f ${NAME}

fclean : 	clean

re : 		fclean all

.PHONY:		all clean fclean re