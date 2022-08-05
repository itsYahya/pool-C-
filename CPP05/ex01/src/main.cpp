/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:21:31 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/05 01:47:07 by yel-mrab         ###   ########.fr       */
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
	
	Cat	cat1, cat2;

	cat1.getBrain().setIdea("hello im the one");
	cat2.getBrain().setIdea("hello im the second");
	std::cout << std::endl << std::endl;
	cat1 = cat2;
	
	std::cout << std::endl << std::endl;
	cat2.getBrain().setIdea("hello im not the second gotchaa");
	std::cout << std::endl << std::endl;
	cat1.getBrain().whatYouThink();
	std::cout << std::endl << std::endl;
	return (0);
}