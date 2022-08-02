/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:30:14 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/02 18:16:03 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP
#define DIAMONDTRAP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string name;
	
	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(DiamondTrap const &diamond);
		DiamondTrap(const std::string &name);
		DiamondTrap		&operator=(const DiamondTrap &diamond);
		std::string		getClapTrapName( void);
		std::string		getDiamondName( void );
		void			attack( const std::string &target );
		void			whoAmI( void );
};

#endif