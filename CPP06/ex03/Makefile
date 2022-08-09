# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/08 15:21:15 by yel-mrab          #+#    #+#              #
#    Updated: 2022/08/09 19:23:04 by yel-mrab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
INC = -I ./inc
BUILD = build
OUT = forms.a

HEADERSFILES = bureaucrat form shrubberyCreationForm robotomyRequestForm presidentialPardonForm intern
HEADERS := $(addprefix inc/, $(HEADERSFILES:=.hpp))

FILES = main classes/bureaucrat classes/form classes/shrubberyCreationForm \
	 classes/robotomyRequestForm classes/presidentialPardonForm \
	 classes/intern

OBJS := $(addprefix $(BUILD)/, $(FILES:=.o))

all : $(OUT)
	
$(OUT) : $(OBJS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(OUT)

$(BUILD)/%.o : src/%.cpp $(HEADERS)
	mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c $< -o $@ $(INC)

clean :
	rm -rf $(BUILD)
	rm -rf *_shrubbery

fclean : clean
	rm -rf $(OUT)

re : fclean all

.PHONY : re fclean clean all