# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cyuzbas <cyuzbas@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2021/11/03 14:57:30 by cyuzbas       #+#    #+#                  #
#    Updated: 2021/11/08 14:58:44 by cyuzbas       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME    	= 	libftprintf.a
CC			= 	gcc
CFLAGS		= 	-Wall -Wextra -Werror

SRCS    	=	ft_converthexa.c ft_itoa.c ft_printf.c ft_strchr.c \
				ft_strdup.c ft_strlen.c ft_utoa.c write_cs.c \
				write_idu.c write_px.c

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(SRCS:.c=.o)

fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re bonus