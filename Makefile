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



################################################################################
#		VARIABLE DECLARATION
################################################################################

SRC_DIR = src
INC_DIR = inc
OBJ_DIR = obj
BIN_DIR = bin

SRCS = ft_printf.c\
	   str_utils.c\
	   nbr_utils.c

OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra  

RM = rm -f

################################################################################
#		IMPLICIT RULES
################################################################################

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
		@$(CC) $(CFLAGS) -c $< -o $@

all:	$(NAME)	

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

#clean implicit rules
#	clean:		remove object files (.o)
#	fclean:		remove object files and the binary (.o, .a)
#	re:			remove object files and the binary (.a, .a). Remake the binary 

clean:	
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME) $(OBJS)

re:	fclean all

# .PHONY avoid relinking
.PHONY: all bonus clean fclean r 
