/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 15:33:13 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/09 19:24:26 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "form.hpp"
#include "bureaucrat.hpp"
#include "shrubberyCreationForm.hpp"
#include "robotomyRequestForm.hpp"
#include "presidentialPardonForm.hpp"
#include "intern.hpp"

int	main(){
	try{
		Intern	inter;
		Form	*form = inter.makeForm("RobotomyRequestForm", "home");
		if (form == NULL)
			return (1);
		Bureaucrat	b("yahya", 10);
		form->beSigned(b);
		form->execute(b);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	// std::cout << "hello there bro" << std::endl;
	
	return (0);
}