/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:03:48 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/02 22:40:43 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP
#define SCAVTRAP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap{
    public :
        FragTrap(std::string name);
        FragTrap();
        ~FragTrap();
        FragTrap(const FragTrap &frag);
        FragTrap    &operator=(const FragTrap &frag);
        void        highFivesGuys(void);
};

#endif