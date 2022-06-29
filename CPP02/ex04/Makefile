# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/29 03:20:33 by yel-mrab          #+#    #+#              #
#    Updated: 2022/06/29 03:25:21 by yel-mrab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
FILES = main  
BDIR = build
OBJS = $(addprefix $(BDIR)/, $(FILES:=.o))

NAME = sed

all : $(NAME)
	
$(NAME) : $(OBJS)
	$(CPP) $(MLXFLAGS) $(OBJS) -o $(NAME)

$(BDIR)/%.o : %.cpp $(HEADERS)
	@mkdir -p $(@D)
	$(CPP) $(CFLAGS) -c $< -o $@ $(INC)

clean :
	rm -rf $(BDIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all