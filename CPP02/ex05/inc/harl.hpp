/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 02:50:36 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/06/28 04:34:48 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
class Harl{
    private:
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
        void    notthere(void);
    
    public:
        void    complain(Harl &harl, std::string level);
        Harl();
};
#endif