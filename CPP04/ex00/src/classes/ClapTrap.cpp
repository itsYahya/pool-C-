/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:23:56 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/07/26 21:42:18 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

std::map<std::string, ClapTrap> ClapTrap::claps;

ClapTrap::ClapTrap(){
    std::cout << "ClapTrap default constructor called !" << std::endl;
    this->name = "clap";
    this->enrgyPoint = 10;
    this->hitPoint = 10;
    this->attackDamage = 0;
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap destructor called !" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
    std::cout << "ClapTrap constructor called !" << std::endl;
    this->name = name;
    this->enrgyPoint = 10;
    this->hitPoint = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name, int addToMap){
    std::cout << "ClapTrap constructor called !" << std::endl;
    this->name = name;
    this->enrgyPoint = 10;
    this->hitPoint = 10;
    this->attackDamage = 0;
	ClapTrap::claps[name] = *this;
	addToMap = 0;
}

ClapTrap::ClapTrap(ClapTrap const &clap){
    std::cout << "ClapTrap copy constructor called !" << std::endl;
    this->name = clap.name;
    this->enrgyPoint = clap.enrgyPoint;
    this->hitPoint = clap.hitPoint;
    this->attackDamage = clap.attackDamage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clap){
    std::cout << "ClapTrap = operator called !" << std::endl;
    this->name = clap.name;
    this->enrgyPoint = clap.enrgyPoint;
    this->hitPoint = clap.hitPoint;
    this->attackDamage = clap.attackDamage;
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