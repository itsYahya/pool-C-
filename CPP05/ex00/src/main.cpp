/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:21:31 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/04 19:36:16 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"
#include "cat.hpp"
#include "wrongCat.hpp"


void	test1(){
	std::cout << "Test number 1 **************" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;
	std::cout << "**************" << std::endl << std::endl;
}

void	test2(){
	std::cout << "Test number 2 **************" << std::endl;
	Cat		cat;
	Dog 	dog;
	Animal	animal;

	cat.makeSound();
	dog.makeSound();
	animal.makeSound();
	
	std::cout << "**************" << std::endl << std::endl;
}

void	wrongTest(){
	std::cout << "wrong Test **************" << std::endl;
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* i = new WrongCat();
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	meta->makeSound();
	delete meta;
	delete i;
	std::cout << "**************" << std::endl << std::endl;
}

int	main(){
	
	test1();

	test2();

	wrongTest();
	return (0);
}