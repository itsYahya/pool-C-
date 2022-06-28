/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 02:37:23 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/06/27 03:28:10 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie::Zombie(){

}

void    Zombie::announce(void){
    std::string an = "";
    if (name != "Foo")
        an.append("<");
    an.append(name);
    if (name != "Foo")
        an.append(">");
    an.append(": BraiiiiiiinnnzzzZ...\n");
    std::cout << an;
}

void    Zombie::setName(std::string name_){
    name = name_;
}

std::string Zombie::getName(void){
    return (name);
}