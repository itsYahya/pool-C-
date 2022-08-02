/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:21:49 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/02 19:35:01 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){
    ClapTrap clap("clap1"), clap2("clap2");

    clap.attack("clap2");
    clap2.takeDamage(clap2.getAttackDamage());
    
    clap2.beRepaired(clap.getAttackDamage());
    return (0);
}