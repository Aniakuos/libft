# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssghuri <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/15 22:51:12 by ssghuri           #+#    #+#              #
#    Updated: 2019/10/26 04:58:52 by ssghuri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CC=gcc
CFLAGS=-Wall -Wextra -Werror
RM=rm -f
SRC = ft_memset.c \
	  ft_bzero.c \
	  ft_memcpy.c \
	  ft_memccpy.c \
	  ft_memmove.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_strlen.c \
	  ft_strlcpy.c \
	  ft_strlcat.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strnstr.c \
	  ft_strncmp.c \
	  ft_atoi.c \
	  ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_strmapi.c \
	  ft_strdup.c \
	  ft_substr.c  \
	  ft_strtrim.c \
	  ft_split.c \
	  ft_calloc.c \
	  ft_itoa.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \
	  ft_strjoin.c

SB = ft_lstnew_bonus.c \
	 ft_lstadd_front_bonus.c \
	 ft_lstsize_bonus.c \
	 ft_lstlast_bonus.c \
	 ft_lstadd_back_bonus.c \
	 ft_lstdelone_bonus.c \
	 ft_lstclear_bonus.c \
	 ft_lstiter_bonus.c \
	 ft_lstmap_bonus.c

OBJ = $(SRC:.c=.o)
OBJBOU = $(SB:.c=.o)
all: $(NAME) 
	    
$(NAME):
	@$(CC) $(CFLAGS) $(SRC) -c
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
bonus:
	@$(CC) $(CFLAGS) $(SB) $(SRC) -c
	@ar rcs $(NAME) $(OBJBOU)
clean:
	$(RM) $(OBJ) $(OBJBOU)
fclean: clean
	$(RM) $(NAME)
re: fclean all
.PHONY: clean fclean
