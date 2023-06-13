CFLAGS = -Wall -Wextra -Werror

SRCS =  ft_dict_manip.c \
	ft_parser.c \
	ft_atois.c \
	ft_print.c \
	ft_split.c \
	ft_write.c \
	ft_utils.c \
	ft_free.c \
	ft_join.c \
	main.c \

OBJS = ${SRCS:.c=.o}

NAME = rush-02

%.o : %.c
	cc ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	cc ${CFLAGS} -o ${NAME} ${OBJS}

all : ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all