/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 06:37:34 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/06/28 02:37:30 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "humanA.hpp"
#include "humanB.hpp"
#include "weapon.hpp"

int main(){
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();

    Weapon club1 = Weapon("crude spiked club1");
    std::cout << "\n--bob--\n\n";
    HumanA bob("Bob", club1);
    bob.attack();
    club1.setType("some other type of club1");
    bob.attack();
    return (0);
}