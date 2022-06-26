# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/21 06:11:51 by yel-mrab          #+#    #+#              #
#    Updated: 2022/06/21 07:18:41 by yel-mrab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
cpp = c++
CPPFLAGC = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)


$(NAME): $(OBJ)
	$(cpp) $(CPPFLAGC) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(cpp) $(CPPFLAGC) -c $<
	
clean : 
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : re fclean clean all
