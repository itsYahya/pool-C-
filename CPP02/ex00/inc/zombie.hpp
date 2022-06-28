/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 02:37:31 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/06/27 03:29:21 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
    private:
        std::string name;

    public:
        Zombie();
        void        setName(std::string name_);
        std::string getName(void);
        void        announce(void);
};

Zombie* newZombie(std::string name);
void    randomChump( std::string name );
void    destroZombie(Zombie *zombie);

#endif