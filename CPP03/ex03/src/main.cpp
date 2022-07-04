/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 03:35:52 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/07/04 22:31:39 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int main( void )
{
    Point a(Fixed(0), Fixed(0)), b(Fixed(20), Fixed(0));
    Point c(Fixed(10), Fixed(30)), p(Fixed(10), Fixed(29));

    if (bsp(a, b, c, p))
        std::cout << "true";
    else
        std::cout << "false";
    return (0);
}