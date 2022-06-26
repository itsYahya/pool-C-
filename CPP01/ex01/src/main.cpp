/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 04:40:03 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/06/26 23:23:11 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "contact.hpp"
#include "phonebook.hpp"

int ft_whichcmd(std::string cmd, std::string add, std::string search, std::string exit)
{
    if (cmd == add)
        return (1);
    else if (cmd == search)
        return (2);
    else if (cmd == exit)
        return (3);
    return (0);
}

Contact setContact(){
    std::string fields[5] = {"first name : ", "last name : ", "nickname : ", "phone number : ", "darcest secret : "};
    std::string values[5];
    std::string str;
    Contact     contact;
    int         i = 0;
    
    contact = Contact();
    while (i < 5)
    {
        std::cout << fields[i];
        if (std::getline(std::cin, str))
            values[i] = str;
        i++;
    }
    contact.setName(values[0]);
    contact.setLastname(values[1]);
    contact.setNickname(values[2]);
    contact.setNumber(values[3]);
    contact.setDsecret(values[4]);
    return (contact);
}

int validIndex(std::string index){
    return (index[0] >= '1' && index[0] <= '8' && index[1] == '\0');
}

void    showSPrompt(Phonebook book)
{
    std::string index;
    
    while (1){
        std::cout << "\nSEARCHPROMPT : ";
        std::getline(std::cin, index);
        if (!std::cin.good())
            return ;
        if (validIndex(index) && std::stoi(index) <= book.getSize()){
            book.showContact(std::stoi(index) - 1);
            return ;
        }
        std::cout << "not a valid index";
    }
}

int ft_exec(int number, Phonebook *book){
    Contact     contact;
    std::string str;
    
    if (number == 1){
        std::cout << "---Fields---\n";
        contact = setContact();
        book->addContact(contact);
    }
    else if (number == 2 && book->getSize() > 0){
        book->showTable();
        showSPrompt(*book);
    }
    else if (number == 3)
        return (1);
    return (0);
}

int main()
{
    Phonebook   book;
    std::string cmd;
    int         number;

    book = Phonebook();
    std::cout   << "--Your PhoneBook is ready to rock!--\n";
    while (1){
        std::cout << book.getSize() << " PhoneBook : ";
        std::getline(std::cin, cmd);
        if (!std::cin.good())
            break;
        number = ft_whichcmd(cmd, "ADD", "SEARCH", "EXIT");
        if (ft_exec(number, &book) || !std::cin.good())
            exit(0);
    }
    return (0);
}