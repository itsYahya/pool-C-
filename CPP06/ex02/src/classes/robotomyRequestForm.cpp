/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   robotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 20:35:59 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/09 18:11:18 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "robotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 145, 137){
	// std::cout << "RobotomyRequestForm defaulte constructor called\n";
	target = "target";
}

RobotomyRequestForm::~RobotomyRequestForm(){
	// std::cout << "RobotomyRequestForm destructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 145, 137){
	// std::cout << "RobotomyRequestForm constructor called\n";
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &roboto) : Form("RobotomyRequestForm", 145, 137){
	// std::cout << "RobotomyRequestForm copy constructor called\n";
	*this = roboto;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &roboto){
	// std::cout << "RobotomyRequestForm copy assignment operator called\n";
	this->target = roboto.target;
	return (*this);
}

void	RobotomyRequestForm::execute_(void) const{
	std::cout << "vennnnnnnnnnnnnnnn vennnnnnnnnnnnnnnn\n";
	std::cout << target << " has been robotomized successfully 50% of the tim\n";
}