CC =  cc -c

CFLAGS = -Wall -Werror -Wextra 

SRCS =	ft_adress.c \
		ft_hex.c \
		ft_hexx.c \
		ft_len.c \
		ft_memorryadress.c \
		ft_putnbr.c \
		hexcount.c \
		ft_putchar.c \
		ft_putstr.c \
		uconvert.c \
		ft_printf.c

OBJS =	ft_adress.o \
		ft_hex.o \
		ft_hexx.o \
		ft_len.o \
		ft_memorryadress.o \
		ft_putnbr.o \
		hexcount.o \
		ft_putchar.o \
		ft_putstr.o \
		uconvert.o \
		ft_printf.o

ARV = ar -rcs

NAME = libftprintf.a

REM = rm -f

.c.o :
	$(CC) $(CFLAGS) $< -o $@
	$(ARV) $(NAME) $@

all : $(NAME)
$(NAME) : $(OBJS)

clean :
	${REM} ${OBJS}

fclean : clean
	${REM} ${NAME}

re : fclean all

.PHONY : all clean fclean bonus re