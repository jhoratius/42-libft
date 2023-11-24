# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhoratiu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/10 13:29:21 by jhoratiu          #+#    #+#              #
#    Updated: 2023/11/10 13:29:23 by jhoratiu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FILES = ft_atoi.c ft_isalpha.c ft_memchr.c ft_memcpy.c ft_strlcat.c ft_strnstr.c ft_bzero.c \
ft_isascii.c ft_memcmp.c ft_memmove.c ft_strlcpy.c ft_strchr.c ft_strrchr.c ft_calloc.c ft_isdigit.c \
ft_memset.c ft_strlen.c ft_tolower.c ft_isalnum.c ft_isprint.c ft_strdup.c ft_strncmp.c \
ft_toupper.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c \
ft_putnbr_fd.c ft_putendl_fd.c ft_strmapi.c ft_striteri.c

FILES_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone \
ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS=$(FILES:.c=.o)
OBJS_BONUS=$(FILES_BONUS:.c=.o)



$(NAME): $(OBJS) 
	$(AR) $(NAME) $(OBJS) 

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $^

all: $(NAME)

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME)

re: clean all

bonus: $(NAME) $(OBJS_BONUS)
	$(AR) $(NAME) $(OBJS_BONUS)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(FILES) $(FILES_BONUS)
	gcc -nostartfiles -shared -o libft.so $(OBJS) $(OBJS_BONUS)

.PHONY: all clean fclean re