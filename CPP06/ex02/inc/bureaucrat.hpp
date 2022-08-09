/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 21:23:12 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/09 02:01:16 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREARCRAT
#define BUREARCRAT

#include <iostream>
class Form;

class Bureaucrat {
	private :
		const std::string	name;
		int					grade;

	public :
		Bureaucrat();	
		~Bureaucrat();	
		Bureaucrat(Bureaucrat const &bureaucrat);
		Bureaucrat(std::string name, int grade);
		Bureaucrat		&operator=(Bureaucrat const &bureaucrat);
		std::string		getName(void) const;
		int				getGrade(void) const;
		void			incrementGrade(void);
		void			decrementGrade(void);
		void			signForm(Form const &form);
		void			executeForm(Form const &form);
};

std::ostream	&operator<<(std::ostream &ostream, Bureaucrat const &bureaucrat);

#endif