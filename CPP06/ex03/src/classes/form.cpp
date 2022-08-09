/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 15:01:40 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/09 18:12:13 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "form.hpp"
#include "bureaucrat.hpp"

Form::Form() : name("Form"), gradeToSigned(100), gradeToExecute(20){
	// std::cout << "Form defealt constructor called !!" << std::endl;
	signed_ = false;
}

Form::~Form(){
	// std::cout << "Form destructor called !!" << std::endl;
}

Form::Form(std::string const name_, int const gradeToSigned_, int const gradeToExecute_) : 
	name(name_), 
	gradeToSigned(gradeToSigned_), 
	gradeToExecute(gradeToExecute_){
	// std::cout << "Form constructor called !!" << std::endl;
	if (gradeToSigned_ > 150 || gradeToSigned_ < 1 || gradeToExecute_ > 150 || gradeToExecute_ < 1)
	{
		std::string	message = "Form::GradeTooHighException";
		if (gradeToSigned_ > 150 || gradeToExecute_ > 150) message = "Form::GradeTooLowException";
		throw std::invalid_argument(message);
	}
	signed_ = false;
}

Form	&Form::operator=(Form const &form){
	// std::cout << "Form assignment operator called !!" << std::endl;
	this->signed_ = form.signed_;
	return (*this);
}

Form::Form(Form const &form) : 
	name(form.name), 
	gradeToSigned(form.gradeToSigned), 
	gradeToExecute(form.gradeToExecute){
	// std::cout << "Form copy constructor called !!" << std::endl;
	*this = form;
}

std::ostream	&operator<<(std::ostream &ostream, Form const &form){
	ostream << "Form :: Name : " << form.getName();
	ostream << ", State : " << ((form.getState()) ? "Signed" : "Not Signed");
	ostream << ", Grade To sign : " << form.getGradeToSigned();
	ostream << ", Grade To execute : " << form.getGradeToExecute();
	return (ostream);
}

bool	Form::getState() const{
	return (signed_);
}

int	Form::getGradeToSigned() const{
	return (gradeToSigned);
}

int	Form::getGradeToExecute() const{
	return (gradeToExecute);
}

std::string	Form::getName() const{
	return (name);
}

void	Form::beSigned(Bureaucrat const &bureaucrat){
	if (bureaucrat.getGrade() > this->gradeToSigned)
		throw std::invalid_argument("Form::GradeTooLowException");
	this->signed_ = true;
}

void	Form::execute(Bureaucrat const &bureaucrat) const{
	if (bureaucrat.getGrade() > this->gradeToExecute)
		throw std::invalid_argument("Form::GradeTooLowException");
	execute_();
}