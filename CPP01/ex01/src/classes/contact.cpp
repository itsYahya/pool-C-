/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 04:44:43 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/06/26 23:19:19 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iostream>
#include <iomanip> 

void    Contact::showContact()
{
    std::cout << "\nfirstname : " << firstname << "\n";
    std::cout << "lastname : " << lastname << "\n";
    std::cout << "nickname : " << nickname << "\n";
    std::cout << "number : " << number << "\n";
    std::cout << "dsecret : " << dsecret << "\n";
}

void    Contact::showContact(int index)
{
    
    std::cout << std::left << std::setw(10) << index + 1;
    std::cout << "|";
    std::cout << std::setw(10) << firstname.substr(0, 9) + Contact::isTenwid(firstname);
    std::cout << "|";
    std::cout << std::setw(10) << lastname.substr(0, 9) + Contact::isTenwid(lastname);
    std::cout << "|";
    std::cout << std::setw(10) << nickname.substr(0, 9) + Contact::isTenwid(nickname);
    std::cout << "|\n";
}

std::string Contact::isTenwid(std::string str){
    return ((str.size() >= 10) ? "." : "");
}

Contact::Contact()
{
}

Contact::Contact(std::string name_, std::string lastname_, std::string nickname_, std::string number_, std::string dsecret_){
    firstname = name_;
    lastname = lastname_;
    nickname = nickname_;
    number = number_;
    dsecret = dsecret_;
}

int Contact::isnotValid(){
    return (firstname.empty() || lastname.empty()
        || nickname.empty() || number.empty() || dsecret.empty());
}

void    Contact::setName(std::string name_){
    firstname = name_;
}
    
std::string Contact::getName(){
    return (firstname);
}
    
void    Contact::setLastname(std::string lastname_){
    lastname = lastname_;
}
    
std::string Contact::getLastname(){
    return (lastname);
}

void    Contact::setNickname(std::string nickname_){
        nickname = nickname_;
}
    
std::string Contact::getNickname(){
    return (nickname);
}

void    Contact::setNumber(std::string number_){
    number = number_;
}

std::string Contact::getNumber(){
    return (number);
}

void    Contact::setDsecret(std::string dsecret_){
    dsecret = dsecret_;
}
    
std::string Contact::getDsecret(){
    return (dsecret);
}