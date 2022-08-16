/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 01:51:31 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/16 15:57:56 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dynamic.hpp"
#include <cstdlib>
#include <iostream>
#include <time.h>

int	main(){
	Base	*base = generate();
	identify(base);
	Base	*base1 = generate();
	identify(*base1);
	delete base;
	delete base1;
	return 0;
}