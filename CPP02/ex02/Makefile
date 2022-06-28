# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/27 02:42:55 by yel-mrab          #+#    #+#              #
#    Updated: 2022/06/27 04:56:06 by yel-mrab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zomblies
INC = -I ./inc
HEADERS = inc/zombie.hpp
DRBUILD = build
CPPFLAGS = -Wall -Wextra -Werror

SRC = main 

OBJ = $(SRC:=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(CPPFLAGS) $(OBJ) -o $(NAME) $(INC)

%.o : %.cpp $(HEADERS)
	$(CPPFLAGS) -c $< -o $@ $(INC)
	
clean :
	rm -rf $(DRBUILD)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : re fclean clean all	