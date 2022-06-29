# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/27 02:42:55 by yel-mrab          #+#    #+#              #
#    Updated: 2022/06/29 00:41:23 by yel-mrab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain
INC = -I ./inc
HEADERS = inc/zombie.hpp
DRBUILD = build
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main 

OBJ = $(SRC:=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(CPPFLAGS) $(OBJ) -o $(NAME) $(INC)

%.o : %.cpp $(HEADERS)
	$(CPPFLAGS) -c $< -o $@ $(INC)
	
clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : re fclean clean all	