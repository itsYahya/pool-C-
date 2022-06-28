/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 06:24:15 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/06/28 02:32:14 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "weapon.hpp"

class HumanA{
    private:
        std::string name;
        Weapon      *weapon;
    
    public:
        void    attack(void);
        HumanA(std::string name_, Weapon &weapon_);
};

#endif