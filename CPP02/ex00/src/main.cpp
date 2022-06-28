/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 03:18:20 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/06/27 03:50:42 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main(void){
    Zombie *zombie;

    zombie = newZombie("Fooasasd");
    zombie->announce();
    randomChump("yahya");
    destroZombie(zombie);
    return (0);
}