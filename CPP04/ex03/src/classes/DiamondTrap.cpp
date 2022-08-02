/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:29:29 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/02 23:12:27 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
	std::cout << "Diamond defaulte constructor called" << std::endl;
	this->type = "DiamondTrap";
}

DiamondTrap::DiamondTrap(const std::string &name){
	std::cout << "Diamond 'name' constructor called" << std::endl;
	DiamondTrap::name = name;
	ClapTrap::name = name + "_clap_name";
	this->type = "DiamondTrap";
	this->hitPoint = FragTrap::hitPoint;
	this->enrgyPoint = ScavTrap::enrgyPoint;
	this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamond){
	std::cout << "Diamond copy constructor called" << std::endl;
	this->hitPoint = diamond.hitPoint;
	this->attackDamage = diamond.attackDamage;
	this->enrgyPoint = diamond.enrgyPoint;
	this->name = diamond.name;
	ClapTrap::name = this->name + "_clap_name";
	this->type = "DiamondTrap";
}

DiamondTrap::~DiamondTrap(){
	std::cout << "Diamond destructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &diamond){
	this->name = diamond.name;
	this->attackDamage = diamond.attackDamage;
	this->enrgyPoint = diamond.enrgyPoint;
	this->hitPoint = diamond.hitPoint;
	ClapTrap::name = this->name + "_clap_name";
	return (*this);
}

void	DiamondTrap::attack(const std::string &target){
	ScavTrap::attack(target);
}

std::string	DiamondTrap::getClapTrapName(){
	return (ClapTrap::name);
}

std::string	DiamondTrap::getDiamondName(){
	return (DiamondTrap::name);
}

void	DiamondTrap::whoAmI(){
	std::cout << "My name is : " << DiamondTrap::name << std::endl;
	std::cout << "My clap trap name is : " << ClapTrap::name << std::endl;
}