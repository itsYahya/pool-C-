/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 06:34:08 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/06/28 02:33:07 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "humanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name_, Weapon &weapon_){
    name = name_;
    weapon = &weapon_;
}

void    HumanA::attack(void){
    std::cout << name + " attacks with their " + weapon->getType() << std::endl;
}