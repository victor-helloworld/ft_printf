#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: victor <vcollazo@student.42madrid.com>     +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*                                                     #+#    #+#             *#
#*                                                    ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

SRCS = ft_printf.c str_utils.c nbr_utils.c

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra  

RM = rm -f

all:	$(NAME)	

%.o:%.c
		@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)
	
$(NAME): $(OBJS)
	@ar rcs $(NAME) $?

clean:	
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME) $(BONUS_OBJS)

re:	fclean $(NAME)
	
.PHONY: all bonus clean fclean r 
