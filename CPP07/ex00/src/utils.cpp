/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 14:47:20 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/17 17:52:51 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalar.hpp"
#include <limits.h>
#include <iomanip>

int	check_fraction(int i, std::string number, int *err){
	int p = 0;
	for (; number[i]; i++){
		p += (number[i] == '.');
		if ((!std::isdigit(number[i]) && number[i] != '.') || p > 1){
			*err = 9;
			break;
		}
	}
	return i;
}

int check_inff(std::string number, std::string inff, std::string inf, std::string in, std::string nan){
	return (number.compare(inf) == 0 || number.compare(in) == 0
		|| number.compare(inff) == 0 || number.compare(nan) == 0);
}

void	print_char(int num){
	std::cout << "char: ";
	if (num < 0 || num > 126)
		std::cout << "impssible";
	else if (num < 30)
		std::cout << "Non displayable";
	else
		std::cout  << "'" << static_cast<char>(num) << "'";
	std::cout << std::endl;
}

void	print_float(double num, char *str){
	std::string number(str);

	if (check_inff(number, "+inff", "-inff", "inff", "nanf")
		|| check_inff(number, "+inf", "-inf", "inf", "nan")){
		std::cout << "char: impssible\n";
		std::cout << "int: impssible\n";
		std::cout << "float: " << num << "f\n";
		std::cout << "double: " << num << std::endl;
		return ;
	}
	print_char(num);
	std::cout << "int: ";
	if (num > INT_MAX || num < INT_MIN)
		std::cout << "impossible\n";
	else
		std::cout << static_cast<int>(num) << "\n";
	std::cout << "float: "  << static_cast<float>(num) << "f\n";
	std::cout << "double: " << static_cast<double>(num) << std::endl;
}

void	print_int(int num){
	print_char(num);
	std::cout << "int: " << num << "\n";
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(num) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(num) << std::endl;
}