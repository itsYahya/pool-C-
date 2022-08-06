/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 21:23:12 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/06 16:50:18 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREARCRAT
#define BUREARCRAT

#include <iostream>

class Bureaucrat {
	private :
		std::string	const	name;
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
};

std::ostream	&operator<<(std::ostream &ostream, Bureaucrat const &bureaucrat);

#endif