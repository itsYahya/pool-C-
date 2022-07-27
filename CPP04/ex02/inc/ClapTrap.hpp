/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:12:39 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/07/27 14:54:01 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP
#define CLAPTRAP

#include <iostream>
#include <map>

class ClapTrap
{
    protected:
        std::string     name;
        std::string     type;
        unsigned int    hitPoint;
        unsigned int    enrgyPoint;
        unsigned int    attackDamage;
        
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &clap);
        ~ClapTrap();
        ClapTrap        &operator=(const ClapTrap & clap);
        std::string     getName(void);
        void            attack(const std::string &target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);
        static          std::map<std::string, ClapTrap> claps;
        unsigned int    getAttackDamage(void);
        unsigned int    getEnrgyPoint(void);
};


#endif