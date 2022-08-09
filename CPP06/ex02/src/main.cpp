/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 15:33:13 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/09 18:19:09 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "form.hpp"
#include "bureaucrat.hpp"
#include "shrubberyCreationForm.hpp"
#include "robotomyRequestForm.hpp"
#include "presidentialPardonForm.hpp"

int	main(){
	try{
		Bureaucrat	b("yahya", 120);
		
		ShrubberyCreationForm	shrubbery("home");
		
		b.signForm(shrubbery);
		
		shrubbery.beSigned(b);
		shrubbery.execute(b);
		b.executeForm(shrubbery);
		std::cout << shrubbery << std::endl;


		Bureaucrat b1("yahya1", 130);
		RobotomyRequestForm robot("somewhere");
		b1.signForm(robot);
		robot.beSigned(b1);


		Bureaucrat b2("yahya2", 150);
		PresidentialPardonForm pardon("somewhere");
		b2.signForm(pardon);
		pardon.beSigned(b2);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	// std::cout << "hello there bro" << std::endl;
	
	return (0);
}