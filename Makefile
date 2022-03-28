NAME = ft_diamond
HEADER = ./ft_diamond.h
SOURCE = ft_diamond.c
OBJECT = ${SOURCE:.c=.o}
GCC = gcc -g -Wall -Werror -Wextra
RM = rm -f

all: 		${NAME}

${NAME}:	${OBJECT}
			@${GCC} -o ${NAME} ${OBJECT}
			@echo [SUCCESS] Recompiling done!

${OBJECT}:	${SOURCE} ${HEADER} Makefile
			@${GCC} -I . -c ${SOURCE}
			@echo [SUCCESS] Creation of objects done!


run:		all
			@./${NAME}

clean:
			@${RM} ${OBJECT}
			@echo [SUCCESS] Removing objects done!

fclean:		clean
			@${RM} ${NAME}
			@echo [SUCCESS] Removing program done!

re:			fclean all

.PHONY: all clean fclean re
