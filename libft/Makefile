# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mattif <mattif@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/10 16:37:15 by mattif            #+#    #+#              #
#    Updated: 2021/11/26 22:18:40 by mattif           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC =   ft_strlen.c \
        ft_isalpha.c \
        ft_isdigit.c \
        ft_isalnum.c \
        ft_isascii.c \
        ft_isprint.c \
        ft_toupper.c \
        ft_tolower.c \
        ft_strchr.c \
        ft_strlcpy.c \
        ft_strlcat.c \
        ft_atoi.c \
        ft_strrchr.c \
        ft_memcpy.c \
        ft_strnstr.c \
        ft_strncmp.c \
        ft_memset.c \
        ft_bzero.c \
        ft_memcmp.c \
        ft_memchr.c \
        ft_memmove.c \
        ft_calloc.c \
        ft_strdup.c \
        ft_strjoin.c \
        ft_substr.c \
        ft_strtrim.c \
        ft_itoa.c \
        ft_strmapi.c \
        ft_striteri.c \
        ft_split.c \
        ft_putchar_fd.c \
        ft_putnbr_fd.c \
        ft_putstr_fd.c \
        ft_putendl_fd.c

        
OBJECTS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)
        
%.o : %.c $(INCLUDES)
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: clean fclean all
