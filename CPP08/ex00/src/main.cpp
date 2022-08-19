/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 16:04:50 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/17 18:13:08 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "template.hpp"

int	main(){
	int a = 2;
	int b = 3;
	swap(&a, &b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}