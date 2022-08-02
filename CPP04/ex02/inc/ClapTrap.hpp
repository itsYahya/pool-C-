/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:12:39 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/02 22:50:50 by yel-mrab         ###   ########.fr       */
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
        unsigned int    hitPoint;
        unsigned int    enrgyPoint;
        unsigned int    attackDamage;
        std::string     type;
        
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &clap);
        virtual ~ClapTrap();
        ClapTrap        &operator=(const ClapTrap & clap);
        std::string     getName(void);
        virtual void    attack(const std::string &target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);
        unsigned int    getAttackDamage(void);
        unsigned int    getEnrgyPoint(void);
};


#endif