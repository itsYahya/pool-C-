/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:23:56 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/07/27 14:54:28 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

std::map<std::string, ClapTrap> ClapTrap::claps;

ClapTrap::ClapTrap(){
    std::cout << "ClapTrap default constructor called !" << std::endl;
    this->name = "clap";
    this->enrgyPoint = 10;
    this->hitPoint = 10;
    this->attackDamage = 0;
    this->type = "ClapTrap";
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
    this->type = "ClapTrap";
}

ClapTrap::ClapTrap(ClapTrap const &clap){
    std::cout << "ClapTrap copy constructor called !" << std::endl;
    this->name = clap.name;
    this->enrgyPoint = clap.enrgyPoint;
    this->hitPoint = clap.hitPoint;
    this->attackDamage = 0;
    this->type = clap.type;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clap){
    std::cout << "ClapTrap = operator called !" << std::endl;
    this->name = clap.name;
    this->enrgyPoint = clap.enrgyPoint;
    this->hitPoint = clap.hitPoint;
    this->attackDamage = clap.attackDamage;
    this->type = clap.type;
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
    std::cout << type << " " << name;
    std::cout << " attacks " << targate;
    std::cout << ", causing " << attackDamage;
    std::cout << " points of damage!" << std::endl;
	enrgyPoint--;
}

void	ClapTrap::takeDamage(unsigned int amount){
	std::cout << type << " " << name;
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
	std::cout << type << " " << name;
    std::cout << " repaired themselves!" << std::endl;
	hitPoint += amount;
	enrgyPoint--;
}

unsigned int ClapTrap::getAttackDamage(void){
    return (this->attackDamage);
}

unsigned int ClapTrap::getEnrgyPoint(void){
    return (this->enrgyPoint);
}