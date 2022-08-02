/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:12:39 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/02 23:01:09 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP
#define SCAVTRAP

#include "ClapTrap.hpp"

class ScavTrap: public virtual ClapTrap{
    public :
        ScavTrap(std::string name);
        ScavTrap();
        ~ScavTrap();
        ScavTrap(const ScavTrap &scav);
        ScavTrap    &operator=(const ScavTrap &scav);
        void        guardGate();
        void        attack(const std::string &target);
};

#endif