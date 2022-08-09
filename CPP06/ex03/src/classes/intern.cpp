/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:38:33 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/09 19:23:25 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intern.hpp"

Intern::Intern(){
	// std::cout << "Form defealt constructor called !!" << std::endl;
}

Intern::~Intern(){
	// std::cout << "Form destructor called !!" << std::endl;
}

Form	*Intern::makeForm(std::string name, std::string target){
	std::string	names[4] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm", "Not found"};
	int			i;
	Form		*form = 0;
	for (i = 0; names[i] != name && i < 4; i++);
	switch (i){
		case 0:
			form = new ShrubberyCreationForm(target);
			break;
		case 1:
			form = new RobotomyRequestForm(target);
			break;
		case 2:
			form = new PresidentialPardonForm(target);
			break;
		default:
			std::cout << "couldnt find Form name\n";	
	}
	if (form)
		std::cout << "Intern creats " << *form << std::endl; 
	return (form);
}
