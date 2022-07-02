/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 05:55:38 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/07/02 22:54:38 by yel-mrab         ###   ########.fr       */
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
        Fixed(Fixed const &fixed);
        ~Fixed();
        Fixed(int const num);
        Fixed(float const num);
        int     getRawBits(void);
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
        Fixed   &operator=(const Fixed &fixed);
};

std::ostream & operator << (std::ostream &out, const Fixed &c);

#endif