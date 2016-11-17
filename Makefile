# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agaspard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/09 14:33:41 by agaspard          #+#    #+#              #
#    Updated: 2016/11/09 15:20:21 by agaspard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c

ICL = libft.h

FLAG = -Wall -Werror -Wextra

OBJ = *.o

all : $(NAME)

$(NAME) :
	gcc $(FLAG) -c $(SRC) -I $(ICL)
	ar rc $(NAME) $(OBJ)

clean :
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all

.PHONY : clean re fclean all
