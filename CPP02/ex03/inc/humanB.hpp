/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 06:17:48 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/06/28 02:32:29 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "weapon.hpp"

class HumanB{
    private:
        std::string name;
        Weapon      *weapon;
    
    public:
        void    attack(void);
        void    setWeapon(Weapon &weapon_);
        HumanB(std::string name_);
};

#endif