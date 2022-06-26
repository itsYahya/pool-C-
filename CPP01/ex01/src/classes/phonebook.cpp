/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 04:44:12 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/06/26 22:59:30 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <strstream>
#include "phonebook.hpp"
#include "contact.hpp"
#include <iomanip> 

void    Phonebook::showHeader(){
    std::cout << std::left << std::setw(10) << "index";
    std::cout << "|";
    std::cout << std::setw(10) << "first name";
    std::cout << "|";
    std::cout << std::setw(10) << "last name";
    std::cout << "|";
    std::cout << std::setw(10) << "nickname";
    std::cout << "|\n";
}

void    Phonebook::showTable(){
    int index = 0;
    
    Phonebook::showHeader();
    while (index < Phonebook::size){
        Phonebook::conracts[index].showContact(index);
        index++;
    }
}

Phonebook::Phonebook(){
    Phonebook::size = 0;
    Phonebook::addContact(Contact("yahya", "El mrabti111", "asdjhasd", "alsdhakdhs", "alsdhlahsd"));
}

int     Phonebook::getSize(){
    return (Phonebook::size);
}

void      Phonebook::addContact(Contact cnt){
    int i = 0;
    
    if (cnt.isnotValid())
        return ;
    if (Phonebook::size < 8){
        Phonebook::conracts[Phonebook::size] = cnt;
        Phonebook::size += 1;
    }
    else{
        while (i < 7)
        {
            Phonebook::conracts[i] = Phonebook::conracts[i + 1];
            i++;
        }
        Phonebook::conracts[i] = cnt;
    }
}

void    Phonebook::showContact(int index){
    Phonebook::conracts[index].showContact();
}