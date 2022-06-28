# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/27 02:42:55 by yel-mrab          #+#    #+#              #
#    Updated: 2022/06/27 04:04:24 by yel-mrab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zomblies
INC = -I ./inc
HEADERS = inc/zombie.hpp
DRBUILD = build
CPPFLAGS = c++ -Wall -Wextra -Werror

SRC = main newZombie randomChump zombieHorde\
	classes/zombie

OBJ = $(addprefix $(DRBUILD)/,$(SRC:=.o))

all : $(NAME)

$(NAME) : $(OBJ)
	$(CPPFLAGS) $(OBJ) -o $(NAME) $(INC)

$(DRBUILD)/%.o : src/%.cpp $(HEADERS)
	mkdir -p $(@D)
	$(CPPFLAGS) -c $< -o $@ $(INC)
	
clean :
	rm -rf $(DRBUILD)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : re fclean clean all	