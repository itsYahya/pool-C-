/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:03:48 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/05 01:04:20 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "animal.hpp"
#include "brain.hpp"

class Dog : public Animal{
	private :
		Brain	*brain;
		
	public :
		Dog();
		Dog(Dog const &dog);
		~Dog();
		Dog		&operator=(Dog const &dog);
		void	makeSound(void) const;
};

#endif