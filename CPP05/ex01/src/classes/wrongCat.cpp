/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 18:35:25 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/04 19:31:55 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongCat.hpp"

WrongCat::WrongCat(){
	std::cout << "WrongCat Default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &WrongCat){
	std::cout << "WrongCat copy operator called" << std::endl;
	this->type = WrongCat.type;
	return (*this);
}

WrongCat::WrongCat(WrongCat const &WrongCat){
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = WrongCat;
}

void	WrongCat::makeSound() const{
	std::cout << "meooow :) !!" << std::endl;
}