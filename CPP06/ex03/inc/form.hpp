/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:48:25 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/09 18:28:47 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Bureaucrat;

class Form{
	private :
		std::string	const	name;
		bool				signed_;
		int const			gradeToSigned;
		int const			gradeToExecute;
		
	public :
		Form();
		Form(std::string const name, int const gradeTosigned, int const gradeToexecute);
		Form(Form const &form);
		virtual			~Form();
		Form			&operator=(Form const &form);
		bool			getState(void) const;
		std::string		getName(void) const;
		int 			getGradeToSigned(void) const;
		int 			getGradeToExecute(void) const;
		void			beSigned(Bureaucrat const &bureaucrat);
		void			execute(Bureaucrat const &bureaucrat) const;
		virtual void	execute_(void) const = 0;
};

std::ostream	&operator<<(std::ostream &ostream, Form const &form);

#endif