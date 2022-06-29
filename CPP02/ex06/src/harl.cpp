/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 02:50:31 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/06/28 23:01:15 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"
#include <string.h>

Harl::Harl(){}

void    Harl::debug(void){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!\n";
}

void    Harl::info(void){
    std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void    Harl::warning(void){
    std::cout << "I think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month.\n";
}

void    Harl::error(void){
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void    Harl::notthere(void){
    std::cout << "[ Probably complaining about insignificant problems ]\n";
}

typedef void (Harl::*HarlMemFn)(void);

void    Harl::complain(Harl &harl, std::string level){
    HarlMemFn   complains[5] = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error,
        &Harl::notthere
    };
    int         i = 0;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    while (levels[i] != level && i < 4)
        i++;
    switch (i)
    {
        case 0:
            std::cout << "[ DEBUG ]\n";
            (harl.*complains[0])();
            std::cout << "\n";
        case 1:
            std::cout << "[ INFO ]\n";
            (harl.*complains[1])();
            std::cout << "\n";
        case 2:
            std::cout << "[ WARNING ]\n";
            (harl.*complains[2])();
            std::cout << "\n";
        case 3:
            std::cout << "[ ERROR ]\n";
            (harl.*complains[3])();
            std::cout << "\n";
            break;
        default:
            (harl.*complains[4])();
    }
}