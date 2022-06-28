/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 02:50:31 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/06/28 06:10:36 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"
#include <string.h>

Harl::Harl(){}

void    Harl::debug(void){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void    Harl::info(void){
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void    Harl::warning(void){
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n";
}

void    Harl::error(void){
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void    Harl::notthere(void){
    std::cout << "harl is not a complaining\n";
}

typedef void (Harl::*HarlMemFn)(void);

void    Harl::complain(Harl &harl, std::string level){
    HarlMemFn   complains[5] = {
        &Harl::debug,
        &Harl::info,
        &Harl::error,
        &Harl::warning,
        &Harl::notthere
    };
    std::string levels[4] = {"debug", "info", "warning", "error"};
    int         i = 0;
    while (levels[i] != level && i < 4)
        i++;
    (harl.*complains[i])();
}