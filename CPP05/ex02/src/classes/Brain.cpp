/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 00:46:34 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/05 01:17:15 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brain.hpp"

Brain::Brain(){
	std::cout << "Brain Default constructor called" << std::endl;
	ideas[0] = "hello this is yahya";
}

Brain::~Brain(){
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(Brain const &brain){
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = brain;
}

Brain	&Brain::operator=(Brain const &brain){
	std::cout << "Brain Copy operator overload called" << std::endl;
	for (int i = 0; i < 100; i++){
		this->ideas[i] = brain.ideas[i];
	}
	return (*this);
}

void	Brain::whatYouThink(){
	std::cout << ideas[0] << std::endl;
}

void	Brain::setIdea(std::string const &string){
	ideas[0] = string;
}