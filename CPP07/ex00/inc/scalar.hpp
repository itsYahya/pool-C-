/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 21:39:39 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/15 19:02:17 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
#define	SCALAR_HPP

#include <iostream>

int		check_fraction(int i, std::string number, int *err);
int 	check_inff(std::string number, std::string inff, std::string inf, std::string in, std::string nan);
int		check_int(char *number, int *err);
float	check_float(char *str, int *err);
double	check_double(char *str, int *err);
void	print_float(double num, char *str);
void	print_char(int num);
void	print_int(int num);
int		is_char(char *str);

#endif