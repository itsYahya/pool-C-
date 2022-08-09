/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:22:52 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/09 18:12:57 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137){
	// std::cout << "ShrubberyCreationForm defaulte constructor called\n";
	target = "target";
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	// std::cout << "ShrubberyCreationForm destructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137){
	// std::cout << "ShrubberyCreationForm constructor called\n";
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &shrubbery) : Form("ShrubberyCreationForm", 145, 137){
	// std::cout << "ShrubberyCreationForm copy constructor called\n";
	*this = shrubbery;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &shrubbery){
	// std::cout << "ShrubberyCreationForm copy assignment operator called\n";
	this->target = shrubbery.target;
	return (*this);
}

void	ShrubberyCreationForm::execute_(void) const{
	std::ofstream	file_(this->target + "_shrubbery", std::ios_base::out);
	if (file_.is_open() == false)
		return ;
	file_ << 
	"               ,@@@@@@@,\n"
	"       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
	"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
	"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
	"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
	"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
	"   `&%\\ ` /%&'    |.|        \\ '|8'\n"
	"       |o|        | |         | |\n"
	"       |.|        | |         | |\n"
	"yel \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n";
	file_.close();
}