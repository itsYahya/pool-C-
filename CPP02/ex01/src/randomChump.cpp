/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 03:10:17 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/06/27 03:11:55 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

void randomChump( std::string name ){
    Zombie zombie;

    zombie = Zombie();
    zombie.setName(name);
    zombie.announce();
}