/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:21:31 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/05 16:35:02 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"
#include "cat.hpp"
#include "wrongCat.hpp"
#include "brain.hpp"

int	main(){
	Animal* j = new Dog();
	Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	std::cout << "++++++++++++++++++++" << std::endl;
	std::cout << std::endl << std::endl;
	std::cout << std::endl << std::endl;
	Cat	cat1;
	std::cout << std::endl << std::endl;
	std::cout << std::endl << std::endl;
	cat1.setIdea("machi");
	std::cout << std::endl << std::endl;
	std::cout << std::endl << std::endl;
	Cat	cat2 = cat1;
	std::cout << std::endl << std::endl;
	std::cout << std::endl << std::endl;
	cat1.setIdea("yahya");
	cat2.whatYouThink();
	std::cout << std::endl << std::endl;
	std::cout << std::endl << std::endl;
	return (0);
}