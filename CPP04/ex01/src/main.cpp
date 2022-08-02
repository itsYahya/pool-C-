/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:21:49 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/02 21:53:56 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void){
    ScavTrap scav("hello"), scav1("hehe");
    ClapTrap clap("claap");
    clap.attack("himself");
    for (int i = 0; i < 5; i++){
        scav.attack(scav.getName());
        if (scav.getEnrgyPoint())
            scav1.takeDamage(scav1.getAttackDamage());
    }
    scav.guardGate();
}