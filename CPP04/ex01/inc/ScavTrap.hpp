/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:12:39 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/07/27 14:12:38 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP
#define SCAVTRAP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{
    public :
        ScavTrap(std::string name);
        ScavTrap();
        ~ScavTrap();
        ScavTrap(const ScavTrap &scav);
        ScavTrap    &operator=(const ScavTrap &scav);
        void        guardGate();
};

#endif