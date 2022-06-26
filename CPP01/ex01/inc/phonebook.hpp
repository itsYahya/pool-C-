/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 06:54:35 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/06/24 02:53:38 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <streambuf>
#include "contact.hpp"
#include <vector>

class Phonebook
{
    private:
        Contact conracts[8];
        int     size;
        
    public:
        Phonebook();
        int     getSize();
        void    showHeader();
        void    showTable();
        void    addContact(Contact cnt);
        void    showContact(int index);
};


#endif