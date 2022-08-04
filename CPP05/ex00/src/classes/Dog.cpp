/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:08:46 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/04 17:15:15 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

Dog::Dog(){
	std::cout << "Dog Default constructor called" << std::endl;
	this->type = "Dog";
}

Dog::~Dog(){
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &dog){
	std::cout << "Dog copy operator called" << std::endl;
	this->type = dog.type;
	return (*this);
}

Dog::Dog(Dog const &dog){
	std::cout << "Dog copy constructor called" << std::endl;
	*this = dog;
}

void	Dog::makeSound() const{
	std::cout << "barking *__* ??" << std::endl;
}