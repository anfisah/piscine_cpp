NAME = Materia

SRCS = main.cpp AMateria.cpp Cure.cpp Ice.cpp Character.cpp MateriaSource.cpp

INCLUDES = AMateria.hpp Cure.hpp Ice.hpp ICharacter.hpp Character.hpp IMateriaSource.hpp MateriaSource.hpp

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