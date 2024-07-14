# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/19 00:58:32 by rhiguita          #+#    #+#              #
#    Updated: 2024/06/06 22:14:14 by rhiguita         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT = libft/libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra -g
AR = ar -rcs
REMOVE = rm -f

SRC =	ft_printf.c

OBJ = $(SRC:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(LIBFT) $(OBJ)
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJ)

$(LIBFT) : 
	make bonus -C libft

all : libft $(NAME)

clean :
	$(REMOVE) $(OBJ)
	make fclean -C libft

fclean : clean
	$(REMOVE) $(NAME)
	@$(MAKE) fclean -C libft

re : fclean all

.PHONY: all clean fclean re
