/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 21:39:37 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/15 19:37:59 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalar.hpp"
#include <iostream>
#include <ctype.h>
#include <limits.h>
#include <string.h>

int	is_double(char *str){
	int	err;

	double num = check_double(str, &err);
	if (err == 1){
		std::cout << "the type conversion is impossible" << std::endl;
		return (-1);
	}
	if (err == 0){
		print_float(num, str);
		return (1);
	}
	return (0);
}

int	is_float(char *str){
	int	err;

	float num = check_float(str, &err);
	if (err == 1){
		std::cout << "the type conversion is impossible" << std::endl;
		return (-1);
	}
	if (err == 0){
		print_float(num, str);
		return (1);
	}
	return (0);
}

int	is_int(char *str){
	int	err;

	int num = check_int(str, &err);
	if (err == 1){
		std::cout << "the type conversion is impossible" << std::endl;
		return (-1);
	}
	if (err == 0){
		print_int(num);
		return (1);
	}
	return (0);
}

int is_char(char *str){
	if (strlen(str) != 1)
		return (0);
	if (str[0] < 32)
		std::cout << "non displayable characters shouldn’t be used as inputs" << std::endl;
	else{
		std::cout << "char: " << "'" << str[0] <<  "'" << "\n";
		std::cout << "int: " << static_cast<int>(str[0]) << "\n";
		std::cout << "float: " << static_cast<float>(str[0]) << ".0f\n";
		std::cout << "double: " << static_cast<double>(str[0]) << ".0" << std::endl;
	}
	return (1);
}

int	main(int argc, char **argv){
	argc++;
	if (is_char(argv[1]))
		return (0);
	if (is_int(argv[1]))
		return (0);
	if (is_double(argv[1]))
		return (0);
	if (is_float(argv[1]))
		return (0);
	std::cout << "Expecting a string repredentstion of a C++ literal in its most common form\nWith numbers only" << std::endl;
	return (0);
}