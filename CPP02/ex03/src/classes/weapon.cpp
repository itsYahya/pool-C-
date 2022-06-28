/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 06:25:42 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/06/27 22:07:35 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "weapon.hpp"

void        Weapon::setType(std::string type_){
    type = type_;
}

std::string Weapon::getType(void){
    return (type);
}

Weapon::Weapon(std::string type_){
    type = type_;
}

Weapon::Weapon(){
}