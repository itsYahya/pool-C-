# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/27 02:42:55 by yel-mrab          #+#    #+#              #
#    Updated: 2022/06/29 00:49:40 by yel-mrab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
INC = -I ./inc
HEADERS = inc/humanA.hpp inc/humanB.hpp inc/weapon.hpp
FILES = main  \
		classes/humanA classes/humanB classes/weapon
BDIR = build
OBJS = $(addprefix $(BDIR)/, $(FILES:=.o))

NAME = harm

all : $(NAME)
	
$(NAME) : $(OBJS)
	$(CPP) $(MLXFLAGS) $(OBJS) -o $(NAME)

$(BDIR)/%.o : src/%.cpp $(HEADERS)
	@mkdir -p $(@D)
	$(CPP) $(CFLAGS) -c $< -o $@ $(INC)

clean :
	rm -rf $(BDIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : re fclean clean all