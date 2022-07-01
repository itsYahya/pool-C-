/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 05:55:38 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/06/30 07:19:17 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
    private:
        int              fxpoint;
        static const int nfb = 8;
    public:
        int i;
        Fixed();
        Fixed(Fixed &fixed);
        ~Fixed();
        int     getRawBits(void);
        void    setRawBits(int const raw);
        Fixed   &operator=(const Fixed &fixed);
};

#endif