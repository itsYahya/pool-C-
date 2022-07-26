# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/25 15:22:30 by yel-mrab          #+#    #+#              #
#    Updated: 2022/07/25 18:35:29 by yel-mrab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INC = -I ./inc
CPPFLAGS = C++ -Wall -Wextra -Werror -std=c++98
FILES = classes/ClapTrap main
HEADER = inc/ClapTrap.hpp
OBJS = $(addprefix build/, $(FILES:=.o))
NAME = ClapTrap

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