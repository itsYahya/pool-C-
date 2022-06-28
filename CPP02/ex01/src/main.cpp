/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 03:18:20 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/06/27 04:21:47 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

void    destroZombie(Zombie *zombie){
    std::cout << "Zombie named " << zombie->getName();
    std::cout << " have been destroyed !\n";
    delete zombie;
}

int main(void){
    Zombie *zombies;
    
    zombies = zombieHorde(10, "Foo");
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << i << "  ";
        (zombies + i)->announce();
    }
    std::cout << "---freeing data---\n";
    delete[] zombies;
    while (1)
        ;
    return (0);
}