/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:55:25 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/16 18:23:10 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename type>
void	foo(int index, type arg){
	std::cout << index + 1 << " " << arg << std::endl;
}

template<typename type, typename funtype>
void	iter(type *arr, int length, funtype fun){
	for (int i = 0; i < length; i++){
		fun(i, arr[i]);
	}
}

#endif