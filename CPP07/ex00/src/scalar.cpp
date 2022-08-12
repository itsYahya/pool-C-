/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 21:39:37 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/12 01:01:11 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalar.hpp"
#include <iostream>
#include <ctype.h>
#include <limits.h>

int	check_int(char *number, int int_){
	int	 i = 0, sign = 0;
	long res = 0;

	i += (number[i] == '+' || number[i] == '-');
	sign = i;
	for (i = 0; number[i]; i++){
		res = res * 10 + (number[i] - '0');
		if (!std::isdigit(number[i])){
			int_ = 1;
			break;
		}
	}
}

int	main(int argc, char **argv){
	std::cout << argv[1] << " " << argc << std::endl;
	return (0);
}