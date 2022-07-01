/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 06:55:42 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/07/01 03:34:47 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    fxpoint = 0;
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed &fixed){
    std::cout << "Copy constructor called\n";
    fxpoint = fixed.fxpoint;
}

Fixed::~Fixed(){
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void){
    std::cout << "getRawBits member function called\n";
    return (this->fxpoint);
}

void    Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called\n";
    this->fxpoint = raw;
}

Fixed   &Fixed::operator=(const Fixed &fixed){
    std::cout << "Copy assignment operator calle\n";
    this->fxpoint = fixed.fxpoint;
    return (*this);
}

