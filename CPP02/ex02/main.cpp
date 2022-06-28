/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 04:27:41 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/06/27 05:39:35 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void){
    std::string str;
    std::string *stringPTR;
    std::string &stringREF = str;
    
    str = "HI THIS IS BRAIN";
    stringPTR = &str;
    
    std::cout << "Pointer value: " << (void *)&str << std::endl;
    std::cout << "Pointer value: " << (void *)stringPTR << std::endl;
    std::cout << "Pointer value: " << (void *)&stringREF << std::endl;
    
    std::cout << "Pointer value: " << str << std::endl;
    std::cout << "Pointer value: " << *stringPTR << std::endl;
    std::cout << "Pointer value: " << stringREF << std::endl;
}