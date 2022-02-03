# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/18 12:15:39 by conguyen          #+#    #+#              #
#    Updated: 2022/01/19 08:47:45 by conguyen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

CC = gcc
CFLAGS = -Wall -Werror -Wextra
LIBFT = libft/
HEADER = includes/

CFILES += main.c
CFILES += read_validate.c
CFILES += tetrimino.c
CFILES += free.c
CFILES += mapping.c
CFILES += solver.c

OBJ = $(CFILES:.c=.o)

all: $(NAME)

$(NAME):
	make -C $(LIBFT)
	$(CC) -c $(CFLAGS) -I includes $(CFILES)
#	$(CC) $(CFLAGS) $(OBJ) -I $(HEADER) -L. libft/libft.a
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -I $(HEADER) -L. libft/libft.a

clean:
	/bin/rm -f $(OBJ)
	make -C $(LIBFT) clean

fclean: clean
	/bin/rm -f $(NAME)
	make -C $(LIBFT) fclean

re: fclean all
