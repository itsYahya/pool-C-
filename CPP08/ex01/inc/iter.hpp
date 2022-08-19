/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:55:25 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/17 19:52:44 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename type>
void	foo(int index, type &arg){
	std::cout << index + 1 << " " << arg << std::endl;
}

template<typename type>
void	iter(type *arr, int length, void (*funtype)(int, type&)){
	for (int i = 0; i < length; i++){
		funtype(i, arr[i]);
	}
}

class A{
	private : 
		int n;

	public :
		A() : n(199){};
		int	get(void) const {return n;};
};
std::ostream &operator<<(std::ostream &o, A const &a) {o << a.get(); return o;}

#endif