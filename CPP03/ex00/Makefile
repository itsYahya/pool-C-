# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/30 05:55:02 by yel-mrab          #+#    #+#              #
#    Updated: 2022/07/01 03:59:57 by yel-mrab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INC = -I ./inc
CPPFLAGS = C++ -Wall -Wextra -Werror 
FILES = Fixed main
OBJS = $(addprefix build/, $(FILES:=.o))
NAME = fixed

all : $(NAME)

$(NAME) : $(OBJS)
	$(CPPFLAGS) $(OBJS) -o $(NAME)

build/%.o : src/%.cpp
	mkdir -p $(@D)
	$(CPPFLAGS) -c $< -o $@ $(INC)

clean :
	rm -rf build

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : re fclean clean all