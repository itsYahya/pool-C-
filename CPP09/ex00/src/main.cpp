/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 15:22:43 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/17 21:51:43 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main(){
	std::vector<int> vect;
	vect.push_back(100);
	vect.push_back(200);
	vect.push_back(300);
	vect.push_back(400);
	vect.push_back(4000);

	std::vector<int>::iterator iter = begin(vect);
	for (; iter != end(vect); iter++)
		std::cout << *iter << " value" << std::endl;
	bool i = easyfind(vect, 4000);

	std::cout << std::endl;
	std::cout << (i ? "number found !" : "coudlnt spot the number !!") << std::endl;

	return (0);
}