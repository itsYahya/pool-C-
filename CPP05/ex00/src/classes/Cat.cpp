/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:03:26 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/04 17:15:11 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat(){
	std::cout << "Cat Default constructor called" << std::endl;
	this->type = "Cat";
}

Cat::~Cat(){
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &cat){
	std::cout << "Cat copy operator called" << std::endl;
	this->type = cat.type;
	return (*this);
}

Cat::Cat(Cat const &cat){
	std::cout << "Cat copy constructor called" << std::endl;
	*this = cat;
}

void	Cat::makeSound() const{
	std::cout << "meooow :) !!" << std::endl;
}