/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 21:23:00 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/06 16:13:32 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
	std::cout << "Bureaucrat defealt constructor called !!" << std::endl;
	this->name = "bureaucrat";
	this->grade = 150;
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat destructor called !!" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade){
	std::cout << "Bureaucrat 'name && grade' constructor called !!" << std::endl;
	if (grade > 150 || grade < 1)
	{
		std::string	message = "Bureaucrat::GradeTooHighException";
		if (grade > 150) message = "Bureaucrat::GradeTooLowException";
		throw std::invalid_argument(message);
	}
	this->name = name;
	this->grade = grade;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &bureaucrat){
	std::cout << "Bureaucrat assignment operator called !!" << std::endl;
	this->name = bureaucrat.name;
	this->grade = bureaucrat.grade;
	return (*this);
}

std::ostream	&operator<<(std::ostream &ostream, Bureaucrat const &bureaucrat){
	ostream << bureaucrat.getName() << " bureaucrat grade " << bureaucrat.getGrade();
	return (ostream);
}

Bureaucrat::Bureaucrat(Bureaucrat const &bureaucrat){
	std::cout << "Bureaucrat copy constructor called !!" << std::endl;
	*this = bureaucrat;
}

int	Bureaucrat::getGrade() const{
	return (this->grade);
}

std::string	Bureaucrat::getName() const{
	return (this->name);
}

void	Bureaucrat::decrementGrade(){
	if (this->grade + 1 > 150)
		throw std::invalid_argument("Bureaucrat::GradeTooLowException");
	this->grade++;
}

void	Bureaucrat::incrementGrade(){
	if (this->grade - 1 < 1)
		throw std::invalid_argument("Bureaucrat::GradeTooHighException");
	this->grade--;
}