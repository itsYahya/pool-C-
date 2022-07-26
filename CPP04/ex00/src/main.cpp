/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:21:49 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/07/26 20:13:54 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){
    ClapTrap("hello", 1);
    ClapTrap("hehe", 1);
    
    ClapTrap::claps["hello"].attack("hehe");
    ClapTrap::claps["hello"].attack("hehe");
    ClapTrap::claps["hello"].attack("hehe");
    ClapTrap::claps["hello"].attack("hehe");
    ClapTrap::claps["hello"].attack("hehe");
    ClapTrap::claps["hello"].attack("hehe");
    ClapTrap::claps["hello"].attack("hehe");
    ClapTrap::claps["hello"].attack("hehe");
    ClapTrap::claps["hello"].attack("hehe");
    ClapTrap::claps["hello"].attack("hehe");
    ClapTrap::claps["hello"].attack("hehe");
    ClapTrap::claps["hello"].attack("hehe");
}