/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 19:03:12 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/07/04 22:09:07 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float   area(Point const a, Point const b, Point const c){
    Fixed   xa, ya, xb, yb, xc, yc, res;
    xa = a.getX(); 
    ya = a.getY(); 
    xb = b.getX(); 
    yb = b.getY(); 
    xc = c.getX(); 
    yc = c.getY();
    res = (xa * (yb - yc) + xb * (yc - ya) + xc * (ya - yb));
    return (std::abs((int)(res.toFloat() / 2.0)));
}

bool bsp( Point const a, Point const b, Point const c, Point const point){
    float   A, A1, A2, A3;

    A = area(a, b, c);
    A1 = area(point, b, c);
    A2 = area(a, point, c);
    A3 = area(a, b, point);
    if (A == A1 + A2 + A3)
        return (true);
    return (false);
}