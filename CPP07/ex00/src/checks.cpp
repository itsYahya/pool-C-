/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 14:49:44 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/14 22:05:01 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalar.hpp"
#include <iostream>

int	check_int(char *number, int *err){
	int	 i = 0, s = 1;
	long res = 0;

	i += (number[i] == '+' || number[i] == '-');
	s = (number[0] == '-') ? -1 : 1;
	for (; number[i]; i++){
		res = res * 10 + (number[i] - '0');
		if (!std::isdigit(number[i])){
			*err = 9;
			return (0);
		}
	}
	*err = (atoi(number) != res * s);
	return (atoi(number));
}

float	check_float(char *str, int *err){
	int	i = 0;
	float num = 0;
	std::string number(str);
	i = (number[i] == '+' || number[i] == '-');
	if (check_inff(number, "+inff", "-inff", "inff", "nan"))
		return (std::stof(number));
	i = check_fraction(i, number, err);
	if (number[i] != 'f' || (number[i] == 'f' && i < (int)(number.length() - 1)))
		return (0);
	try{
		*err = 0;
		num = (float)std::stof(number);
	}
	catch (std::exception &e){
		*err = 1;
		e.what();
	}
	return (num);
}

double	check_double(char *str, int *err){
	int	i = 0;
	double num = 0;
	std::string number(str);
	i = (number[i] == '+' || number[i] == '-');
	if (check_inff(number, "+inf", "-inf", "inf", "nan"))
		return (std::stof(number));
	i = check_fraction(i, number, err);
	if (number[i])
		return (0);
	try{
		*err = 0;
		num = (double)std::stod(number);
	}
	catch (std::exception &e){
		*err = 1;
		e.what();
	}
	return (num);
}