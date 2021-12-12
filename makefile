# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aechafii <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/04 19:55:05 by aechafii          #+#    #+#              #
#    Updated: 2021/12/09 13:05:17 by aechafii         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_hex_low.c ft_hex_up.c ft_address.c
OBJ = $(SRC:.c=.o)
GCC_FLAGS = -Wall -Wextra -Werror
CC = gcc
HEADER = ft_printf.h
AR = ar -rc
NAME = libftprintf.a
all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
%.o: %.c $(HEADER)
	$(CC) $(GCC_FLAGS) -c $<
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f  $(NAME)

re: fclean all


