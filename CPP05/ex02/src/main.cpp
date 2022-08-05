/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:21:31 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/05 03:26:27 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"
#include "cat.hpp"
#include "wrongCat.hpp"
#include "brain.hpp"

int	main(){
	// Animal* j = new Dog();

	std::cout << "++++++++++++++++++++" << std::endl;
	
	Cat	cat1;
	Dog dog;

	std::cout << cat1.getType() << std::endl;
	std::cout << dog.getType() << std::endl;

	
	return (0);
}