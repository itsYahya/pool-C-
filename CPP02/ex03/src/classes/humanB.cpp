/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 06:30:30 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/06/28 02:32:52 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "humanB.hpp"

HumanB::HumanB(std::string name_){
    name = name_;
}

void    HumanB::attack(void){
    std::cout << name + " attacks with their " + weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon_){
    weapon = &weapon_;
}