/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:24:46 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/04 19:37:25 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	protected :
		std::string	type;
		
	public :
		WrongAnimal();
		WrongAnimal(WrongAnimal const &wrongAnimal);
		virtual		~WrongAnimal();
		WrongAnimal	&operator=(WrongAnimal const &wrongAnimal);
		void		makeSound(void) const;
		std::string	getType(void) const;
};


#endif