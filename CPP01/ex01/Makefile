# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/22 04:25:51 by yel-mrab          #+#    #+#              #
#    Updated: 2022/06/24 03:32:47 by yel-mrab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
INC = -I ./inc
HEADERS = inc/contact.hpp
DRBUILD = build
CPPFLAGS = c++ -Wall -Wextra -Werror

SRC = main \
	classes/phonebook classes/contact

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