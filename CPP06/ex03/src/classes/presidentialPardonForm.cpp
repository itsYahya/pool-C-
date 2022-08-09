/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   presidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 20:44:22 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/09 18:11:07 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "presidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 145, 137){
	// std::cout << "PresidentialPardonForm defaulte constructor called\n";
	target = "target";
}

PresidentialPardonForm::~PresidentialPardonForm(){
	// std::cout << "PresidentialPardonForm destructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 145, 137){
	// std::cout << "PresidentialPardonForm constructor called\n";
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &pardon) : Form("PresidentialPardonForm", 145, 137){
	// std::cout << "PresidentialPardonForm copy constructor called\n";
	*this = pardon;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &pardon){
	// std::cout << "PresidentialPardonForm copy assignment operator called\n";
	this->target = pardon.target;
	return (*this);
}

void	PresidentialPardonForm::execute_(void) const{
	std::cout << target << " has been pardoned by Zaphod Beeblebrox\n";
}