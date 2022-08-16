/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:43:19 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/16 21:01:22 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.hpp"
#include <iostream>

int main(){
	Array<int> arr(6);
	Array<int> arr1(4);

	arr[0] = 500;
	arr[1] = 50;
	arr[2] = 5;
	
	arr1 = arr;
	arr1[1] = 22;
	std::cout << arr[1] << std::endl;
	std::cout << arr1[0] << std::endl;
	Array<int> array;

	array[0] = 34;
	try{
		std::cout << array[-1] << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	std::cout << arr1.getSize() << std::endl;
	return (0);
}