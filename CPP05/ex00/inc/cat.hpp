/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:58:57 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/04 17:15:37 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "animal.hpp"

class Cat : public Animal{
	public :
		Cat();
		Cat(Cat const &cat);
		~Cat();
		Cat		&operator=(Cat const &cat);
		void	makeSound(void) const;
};

#endif