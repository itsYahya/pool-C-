/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:14:29 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/07/27 16:55:48 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name){
    std::cout << "FragTrap 'name' constructor called !" << std::endl;
    this->name = name;
    this->attackDamage = 30;
    this->hitPoint = 100;
    this->enrgyPoint = 100;
    this->type = "FragTrap";
}

FragTrap::FragTrap(){
    std::cout << "FragTrap default constructor called !" << std::endl;
    this->name = "frag_clap";
    this->attackDamage = 30;
    this->hitPoint = 100;
    this->enrgyPoint = 100;
    this->type = "FragTrap";
}

FragTrap::FragTrap(const FragTrap &scav){
    std::cout << "FragTrap copy constructor called !" << std::endl;
    this->name  = scav.name;
    this->attackDamage  = scav.attackDamage;
    this->hitPoint  = scav.hitPoint;
    this->enrgyPoint  = scav.enrgyPoint;
    this->type = scav.type;
}

FragTrap    &FragTrap::operator=(const FragTrap &scav){
    std::cout << "FragTrap = operator called !" << std::endl;
    this->name  = scav.name;
    this->attackDamage  = scav.attackDamage;
    this->hitPoint  = scav.hitPoint;
    this->enrgyPoint  = scav.enrgyPoint;
    this->type = scav.type;
    return (*this);
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap destructor called !" << std::endl;
}

void        FragTrap::highFivesGuys(){
    std::cout << "positive high fives reques" << std::endl;
}