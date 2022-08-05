/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 00:42:19 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/05 16:12:33 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{
	protected :
		std::string	ideas[100];
	
	public :
		Brain();
		~Brain();
		Brain(Brain const &brain);
		Brain	&operator=(Brain const &brain);
		void	whatYouThink();
		void	setIdea(std::string const &string);
};

#endif