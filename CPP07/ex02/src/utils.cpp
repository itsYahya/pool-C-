/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 02:43:10 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/16 03:05:28 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dynamic.hpp"
#include <iostream>

Base	*generate(){
	static int number = -1;
	std::srand(time(0));
	int	i;
	do{
		i = std::rand() % 3;
	}
	while(i == number);
	number = i;
	switch (i)
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
		default:
			break;
	}
	return (0);
}

void	identify(Base *p){
	C	*c = dynamic_cast<C*>(p);
	if (c){
		std::cout << "this object is type C" << std::endl;
		return ;
	}
	A	*a = dynamic_cast<A*>(p);
	if (a){
		std::cout << "this object is type A" << std::endl;
		return ;
	}
	B	*b = dynamic_cast<B*>(p);
	if (b){
		std::cout << "this object is type B" << std::endl;
		return ;
	}
}

void	identify(Base &p){
	try{
		(void) dynamic_cast<C&>(p);
		std::cout << "this object is type C" << std::endl;
	}
	catch (std::exception &e){
	}
	try{
		(void) dynamic_cast<A&>(p);
		std::cout << "this object is type A" << std::endl;
	}
	catch (std::exception &e){
	}
	try{
		(void) dynamic_cast<B&>(p);
		std::cout << "this object is type B" << std::endl;
	}
	catch (std::exception &e){
	}
}