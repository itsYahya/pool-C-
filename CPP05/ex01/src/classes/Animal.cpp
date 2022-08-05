/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 20:23:53 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/04 17:14:30 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Animal::Animal(){
	std::cout << "Animal Default constructor called" << std::endl;
	this->type = "animal";
}

Animal::~Animal(){
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &animal){
	std::cout << "Animal copy operator called" << std::endl;
	this->type = animal.type;
	return (*this);
}

Animal::Animal(Animal const &animal){
	std::cout << "Animal copy constructor called" << std::endl;
	*this = animal;
}

void	Animal::makeSound() const{
	std::cout << "Animal sound '_' !" << std::endl;
}

std::string	Animal::getType() const{
	return (this->type);
}