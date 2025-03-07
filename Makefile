# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrabenah <jrabenah@student.42antananari    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/06 12:12:39 by jrabenah          #+#    #+#              #
#    Updated: 2025/03/07 08:21:56 by jrabenah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
LDFLAGS =
NAME = libft.a
FIND = find . -name "*.c"
SRCS = $(shell $(FIND))
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
