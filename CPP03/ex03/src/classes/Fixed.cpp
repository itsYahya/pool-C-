/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 06:55:42 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/07/04 16:21:05 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(){
    fxpoint = 0;
}

Fixed::Fixed(Fixed const &fixed){
    fxpoint = fixed.fxpoint;
}

Fixed::~Fixed(){
}

int Fixed::getRawBits(void){
    return (this->fxpoint);
}

void    Fixed::setRawBits(int const raw){
    this->fxpoint = raw;
}

Fixed::Fixed(int const num){
    fxpoint = roundf(num * (1 << nfb));
}

Fixed::Fixed(float const num){
    fxpoint = roundf(num * (1 << nfb));
}

float Fixed::toFloat(void) const{
    return ((float) fxpoint / (float)(1 << nfb));
}

int Fixed::toInt(void) const{
    return (fxpoint >> nfb);
}

Fixed   &Fixed::operator=(const Fixed &fixed){
    this->fxpoint = fixed.fxpoint;
    return (*this);
}

std::ostream & operator<<(std::ostream &out, const Fixed &fixed){
    out << fixed.toFloat();
    return (out);
}

Fixed   Fixed::operator+(const Fixed &fixed) const{
    Fixed   value(this->toFloat() + fixed.toFloat());
    return (value);
}

Fixed   Fixed::operator-(const Fixed &fixed) const{
    Fixed   value(this->toFloat() - fixed.toFloat());
    return (value);
}

Fixed   Fixed::operator*(const Fixed &fixed) const{
    Fixed   value(this->toFloat() * fixed.toFloat());
    return (value);
}

Fixed   Fixed::operator/(const Fixed &fixed) const{
    Fixed   value(this->toFloat() / fixed.toFloat());
    return (value);
}

bool    Fixed::operator>(const Fixed &fixed) const{
    return (this->toFloat() > fixed.toFloat());
}

bool    Fixed::operator>=(const Fixed &fixed) const{
    return (this->toFloat() >= fixed.toFloat());
}

bool    Fixed::operator<(const Fixed &fixed) const{
    return (this->toFloat() < fixed.toFloat());
}

bool    Fixed::operator<=(const Fixed &fixed) const{
    return (this->toFloat() <= fixed.toFloat());
}

bool    Fixed::operator==(const Fixed &fixed) const{
    return (this->toFloat() == fixed.toFloat());
}

bool    Fixed::operator!=(const Fixed &fixed) const{
    return (this->toFloat() != fixed.toFloat());
}

Fixed   &Fixed::min(Fixed &fixedL, Fixed &fixedR){
    if (fixedL < fixedR)
        return (fixedL);
    return (fixedR);
}

Fixed  const &Fixed::min(const Fixed &fixedL, const Fixed &fixedR){
    if (fixedL < fixedR)
        return (fixedL);
    return (fixedR);
}

Fixed   &Fixed::max(Fixed &fixedL, Fixed &fixedR){
    if (fixedL > fixedR)
        return (fixedL);
    return (fixedR);
}

Fixed  const &Fixed::max(const Fixed &fixedL, const Fixed &fixedR){
    if (fixedL > fixedR)
        return (fixedL);
    return (fixedR);
}

Fixed   Fixed::operator++(){
    fxpoint++;
    return (*this);
}

Fixed   Fixed::operator++(int){
    Fixed   fixed(*this);
    fxpoint++;
    return (fixed);
}

Fixed   Fixed::operator--(){
    fxpoint--;
    return (*this);
}

Fixed   Fixed::operator--(int){
    Fixed   fixed(*this);
    fxpoint--;
    return (fixed);
}