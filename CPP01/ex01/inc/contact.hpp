/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 05:17:26 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/06/23 22:57:52 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <strstream>

class   Contact{
    private:
        std::string firstname;
        std::string lastname;
        std::string nickname;
        std::string number;
        std::string dsecret;
    
    public:
        Contact();
        Contact(std::string name_, std::string lastname_, std::string nickname_, std::string number_, std::string dsecret_);
        std::string isTenwid(std::string str);
        int         isnotValid();
        void        showContact(int index);
        void        showContact();
        void        setName(std::string name_);
        std::string getName();
        void        setDsecret(std::string name_);
        std::string getDsecret();
        void        setLastname(std::string lastname_);
        std::string getLastname();
        void        setNickname(std::string nickname_);
        std::string getNickname();
        void        setNumber(std::string number_);
        std::string getNumber();
};

#endif