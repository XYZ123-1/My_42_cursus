# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrabenah <jrabenah@student.42antananari    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/06 12:12:39 by jrabenah          #+#    #+#              #
#    Updated: 2025/03/13 16:55:24 by jrabenah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
LDFLAGS =
NAME = libft.a
SRCS = ft_atoi.c\
ft_bzero.c\
ft_calloc.c\
ft_isalnum.c\
ft_isalpha.c\
ft_isascii.c\
ft_isdigit.c\
ft_isprint.c\
ft_itoa.c\
ft_memchr.c\
ft_memcmp.c\
ft_memcpy.c\
ft_memmove.c\
ft_memset.c\
ft_putchar_fd.c\
ft_putendl_fd.c\
ft_putnbr_fd.c\
ft_putstr_fd.c\
ft_split.c\
ft_strchr.c\
ft_strdup.c\
ft_striteri.c\
ft_strjoin.c\
ft_strlcat.c\
ft_strlcpy.c\
ft_strlen.c\
ft_strmapi.c\
ft_strncmp.c\
ft_strnstr.c\
ft_strrchr.c\
ft_strtrim.c\
ft_substr.c\
ft_tolower.c\
ft_toupper.c\

OBJS = $(SRCS:.c=.o)
AR = ar
RCS = rcs
COLOR_BoldCyan = \033[1;36m
COLOR_Reset = \033[0m
COLOR_Red = \033[31m

all : $(NAME)

$(NAME) : $(OBJS)
	@$(AR) $(RCS) $@ $^
	@echo "$(COLOR_BoldCyan)Librairy $(NAME) Created with success ..."

%.o : %.c 
	@$(CC) $(CFLAGS) -o $@ -c $< $(LDFLAGS)

clean : 
	@rm -rf $(OBJS)
	@echo " $(COLOR_Red)The binary files are deleted ..."

fclean : clean
	@rm -rf $(NAME)
	@echo " $(COLOR_Red)The librairy file are deleted ..."
re : fclean all
	@echo " $(COLOR_Reset)Recompilation successfully completed ..."
.PHONY :all clean fclean re
