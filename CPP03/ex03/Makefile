# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/30 05:55:02 by yel-mrab          #+#    #+#              #
#    Updated: 2022/07/05 11:13:17 by yel-mrab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INC = -I ./inc
CPPFLAGS = C++ -Wall -Wextra -Werror -std=c++98
FILES = classes/Point classes/Fixed main bsp
HEADER = inc/Fixed.hpp
OBJS = $(addprefix build/, $(FILES:=.o))
NAME = bsp

all : $(NAME)

$(NAME) : $(OBJS) $(HEADER)
	$(CPPFLAGS) $(OBJS) -o $(NAME)

build/%.o : src/%.cpp $(HEADER)
	mkdir -p $(@D)
	$(CPPFLAGS) -c $< -o $@ $(INC)

clean :
	rm -rf build

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : re fclean clean all