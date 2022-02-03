# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/04 14:59:57 by conguyen          #+#    #+#              #
#    Updated: 2022/01/03 13:58:33 by conguyen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFILES += ft_atoi.c
CFILES += ft_bzero.c
CFILES += ft_free_2darray.c
CFILES += ft_isalnum.c
CFILES += ft_isalpha.c
CFILES += ft_isascii.c
CFILES += ft_isdigit.c
CFILES += ft_islower.c
CFILES += ft_isprint.c
CFILES += ft_isupper.c
CFILES += ft_itoa.c
CFILES += ft_list_size.c
CFILES += ft_lstadd.c
CFILES += ft_lstaddend.c
CFILES += ft_lstdel.c
CFILES += ft_lstdelone.c
CFILES += ft_lstdelr.c
CFILES += ft_lstiter.c
CFILES += ft_lstmap.c
CFILES += ft_lstnew.c
CFILES += ft_memalloc.c
CFILES += ft_memccpy.c
CFILES += ft_memchr.c
CFILES += ft_memcmp.c
CFILES += ft_memcpy.c
CFILES += ft_memdel.c
CFILES += ft_memmove.c
CFILES += ft_memset.c
CFILES += ft_putchar.c
CFILES += ft_putchar_fd.c
CFILES += ft_putendl.c
CFILES += ft_putendl_fd.c
CFILES += ft_putnbr.c
CFILES += ft_putnbr_fd.c
CFILES += ft_putstr.c
CFILES += ft_putstr_fd.c
CFILES += ft_strcat.c
CFILES += ft_strchr.c
CFILES += ft_strclr.c
CFILES += ft_strcmp.c
CFILES += ft_strcpy.c
CFILES += ft_strdel.c
CFILES += ft_strdup.c
CFILES += ft_strequ.c
CFILES += ft_strinsert.c
CFILES += ft_striter.c
CFILES += ft_striteri.c
CFILES += ft_strjoin.c
CFILES += ft_strlcat.c
CFILES += ft_strlen.c
CFILES += ft_strmap.c
CFILES += ft_strmapi.c
CFILES += ft_strncat.c
CFILES += ft_strncmp.c
CFILES += ft_strncpy.c
CFILES += ft_strnequ.c
CFILES += ft_strnew.c
CFILES += ft_strnstr.c
CFILES += ft_strrchr.c
CFILES += ft_strrev.c
CFILES += ft_strsplit.c
CFILES += ft_strsplit_tolist.c
CFILES += ft_strstr.c
CFILES += ft_strsub.c
CFILES += ft_strtrim.c
CFILES += ft_tolower.c
CFILES += ft_toupper.c
CFILES += ft_wordcount.c
CFILES += get_next_line.c

OBJ = $(CFILES:.c=.o)
CC = gcc
CFLAGS = -c -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	$(CC) -I includes $(CFLAGS) $(CFILES)
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
