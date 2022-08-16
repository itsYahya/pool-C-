# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/11 21:39:34 by yel-mrab          #+#    #+#              #
#    Updated: 2022/08/14 15:40:05 by yel-mrab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
INC = -I ./inc
BUILD = build
OUT = scalar.a

HEADERSFILES = scalar 
HEADERS := $(addprefix inc/, $(HEADERSFILES:=.hpp))

FILES = scalar utils checks

OBJS := $(addprefix $(BUILD)/, $(FILES:=.o))

all : $(OUT)
	
$(OUT) : $(OBJS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(OUT)

$(BUILD)/%.o : src/%.cpp $(HEADERS)
	mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c $< -o $@ $(INC)

clean :
	rm -rf $(BUILD)

fclean : clean
	rm -rf $(OUT)

re : fclean all

.PHONY : re fclean clean all
