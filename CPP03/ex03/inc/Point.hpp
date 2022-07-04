/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:00:55 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/07/04 22:05:31 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point{
    private:
        Fixed   x;
        Fixed   y;
    public:
        Point();
        Point(Fixed const X, Fixed const Y);
        Point(Point const &point);
        ~Point();
        Point   &operator=(Point const &point);
        Fixed  const &getX(void) const;
        Fixed  const getY(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif