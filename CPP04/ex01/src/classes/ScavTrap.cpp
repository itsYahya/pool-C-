/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:12:39 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/02 21:48:51 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name){
    std::cout << "ScavTrap 'name' constructor called !" << std::endl;
    this->name = name;
    this->attackDamage = 20;
    this->hitPoint = 100;
    this->enrgyPoint = 50;
    this->type = "ScavTrap";
}

ScavTrap::ScavTrap(){
    std::cout << "ScavTrap default constructor called !" << std::endl;
    this->name = "scav_clap";
    this->attackDamage = 20;
    this->hitPoint = 100;
    this->enrgyPoint = 50;
    this->type = "ScavTrap";
}

ScavTrap::ScavTrap(const ScavTrap &scav){
    std::cout << "ScavTrap copy constructor called !" << std::endl;
    *this = scav;
}

ScavTrap    &ScavTrap::operator=(const ScavTrap &scav){
    std::cout << "ScavTrap = operator called !" << std::endl;
    this->name  = scav.name;
    this->attackDamage  = scav.attackDamage;
    this->hitPoint  = scav.hitPoint;
    this->enrgyPoint  = scav.enrgyPoint;
    this->type = scav.type;
    return (*this);
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap destructor called !" << std::endl;
}

void        ScavTrap::guardGate(){
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void    ScavTrap::attack(const std::string &targate){
	if (enrgyPoint == 0){
		std::cout << "no enrgy left!" << std::endl;
		return ;
	}
    std::cout << "ScavTrap " << name;
    std::cout << " attacks " << targate;
    std::cout << ", causing " << attackDamage;
    std::cout << " points of damage!" << std::endl;
	enrgyPoint--;
}