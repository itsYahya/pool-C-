/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 15:33:13 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/07 18:02:52 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "form.hpp"
#include "bureaucrat.hpp"

int	main(){
	try{
		Bureaucrat	b("yahya", 60);
	
		std::cout << b << std::endl;

		b.decrementGrade();
		
		std::cout << b << std::endl;
		
		Form	form("form1", 50, 10);
		
		b.signForm(form);
		
		form.beSigned(b);
		std::cout << form;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	// std::cout << "hello there bro" << std::endl;
	
	return (0);
}