/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:44:27 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/04 17:14:48 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
	protected :
		std::string	type;
		
	public :
		Animal();
		Animal(Animal const &animal);
		virtual			~Animal();
		Animal			&operator=(Animal const &animal);
		virtual void	makeSound(void) const;
		std::string		getType(void) const;
};

#endif