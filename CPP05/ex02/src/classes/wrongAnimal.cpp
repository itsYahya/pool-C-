/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 18:33:50 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/04 18:34:45 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "WrongAnimal Default constructor called" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &WrongAnimal){
	std::cout << "WrongAnimal copy operator called" << std::endl;
	this->type = WrongAnimal.type;
	return (*this);
}

WrongAnimal::WrongAnimal(WrongAnimal const &WrongAnimal){
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = WrongAnimal;
}

void	WrongAnimal::makeSound() const{
	std::cout << "WrongAnimal sound '_' !" << std::endl;
}

std::string	WrongAnimal::getType() const{
	return (this->type);
}