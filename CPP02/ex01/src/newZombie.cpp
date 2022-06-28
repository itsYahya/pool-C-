/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 03:00:37 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/06/27 03:09:27 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie* newZombie(std::string name){
    Zombie *zombie;

    zombie = new Zombie;
    zombie->setName(name);
    return (zombie);
}