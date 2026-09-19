# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: srananun <srananun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/14 15:39:22 by srananun          #+#    #+#              #
#    Updated: 2026/09/18 17:15:43 by srananun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFT = Libft
LIBFT_A = $(LIBFT)/libft.a

SRC =	ft_printf.c \
		ft_printf_utils.c \
		ft_printf_ptr.c \
		ft_printf_unsigned.c \
		ft_printf_hex.c

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@


OBJ = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(LIBFT)


all: $(NAME)

$(NAME): $(OBJ) $(LIBFT_A)
	ar rcs $(NAME) $(OBJ) $(LIBFT)/*.o

$(LIBFT_A):
	$(MAKE) -C $(LIBFT)

clean:
	rm -f $(OBJ)
	$(MAKE) -C $(LIBFT) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT) fclean

re: fclean all

.PHONY: all clean fclean re