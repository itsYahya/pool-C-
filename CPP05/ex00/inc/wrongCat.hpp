/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:45:22 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/04 19:32:30 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "wrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	public :
		WrongCat();
		WrongCat(WrongCat const &wrongCat);
		~WrongCat();
		WrongCat	&operator=(WrongCat const &wrongCat);
		std::string	getType(void) const;
		void		makeSound(void) const;
};

#endif