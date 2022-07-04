/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:09:51 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/07/04 22:05:38 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(){
    x.setRawBits(0);
    y.setRawBits(0);
}

Point::Point(Fixed const X, Fixed const Y){
    x = X;
    y = Y;
}

Point::Point(Point const &point){
    x = point.x;
    y = point.y;
}

Point::~Point(){
}

Point   &Point::operator=(Point const &point){
    this->x = point.x;
    this->y = point.y;
    return (*this);
}

Fixed const &Point::getX(void) const{
    return (this->x);
}

Fixed const Point::getY(void) const{
    return (this->y);
}
