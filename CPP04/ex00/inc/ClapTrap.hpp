/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:12:39 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/07/26 20:14:43 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP
#define CLAPTRAP

#include <iostream>
#include <map>

class ClapTrap
{
    private:
        std::string                 name;
        unsigned int                hitPoint;
        unsigned int                enrgyPoint;
        static const unsigned int   attackDamage = 0;
        
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(std::string name, int addToMap);
        ClapTrap(ClapTrap const &clap);
        ~ClapTrap();
        ClapTrap    &operator=(const ClapTrap & clap);
        std::string getName(void);
        void        attack(const std::string &target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
        static      std::map<std::string, ClapTrap> claps;
};


#endif