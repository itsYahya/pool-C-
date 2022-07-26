/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:23:56 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/07/26 20:04:24 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

std::map<std::string, ClapTrap> ClapTrap::claps;

ClapTrap::ClapTrap(){
    this->name = "clap";
    this->enrgyPoint = 10;
    this->hitPoint = 10;
}

ClapTrap::~ClapTrap(){
    std::cout << "destructor called !" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
    this->name = name;
    this->enrgyPoint = 10;
    this->hitPoint = 10;
}

ClapTrap::ClapTrap(std::string name, int addToMap){
    this->name = name;
    this->enrgyPoint = 10;
    this->hitPoint = 10;
	ClapTrap::claps[name] = *this;
	addToMap = 0;
}

ClapTrap::ClapTrap(ClapTrap const &clap){
    this->name = clap.name;
    this->enrgyPoint = clap.enrgyPoint;
    this->hitPoint = clap.hitPoint;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clap){
    this->name = clap.name;
    this->enrgyPoint = clap.enrgyPoint;
    this->hitPoint = clap.hitPoint;

    return (*this);
}

std::string ClapTrap::getName(){
    return (this->name);
}

void    ClapTrap::attack(const std::string &targate){
	if (enrgyPoint == 0){
		std::cout << "no enrgy left!" << std::endl;
		return ;
	}
	ClapTrap::claps[targate].takeDamage(attackDamage);
    std::cout << "ClapTrap " << name;
    std::cout << " attacks " << targate;
    std::cout << ", causing " << attackDamage;
    std::cout << " points of damage!" << std::endl;
	enrgyPoint--;
}

void	ClapTrap::takeDamage(unsigned int amount){
	std::cout << "ClapTrap " << name;
    std::cout << ", taking " << amount;
    std::cout << " amount of damage!" << std::endl;
	hitPoint -= amount;
	hitPoint = (hitPoint <= 0) ? 0 : hitPoint;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (enrgyPoint == 0){
		std::cout << "no enrgy left!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name;
    std::cout << " repaired themselves!" << std::endl;
	hitPoint += amount;
	enrgyPoint--;
}