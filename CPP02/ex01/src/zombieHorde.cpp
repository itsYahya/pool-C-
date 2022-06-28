/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 03:00:37 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/06/27 04:19:38 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
    Zombie  *zombies;
    
    zombies = new Zombie[N];
    for (int i = 0; i < N; i++)
        (zombies + i)->setName(name);
    return (zombies);
}
