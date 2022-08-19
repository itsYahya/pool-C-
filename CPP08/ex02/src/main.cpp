/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:43:19 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/17 18:52:12 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.hpp"
#include <iostream>


#define MAX 5
int main(){
	Array<int> arr(MAX);
	
	for (int i = 0; i < MAX; i++)
		arr[i] = i * i + i;
	for (int i = 0; i < MAX; i++)
		std::cout << arr[i] << std::endl;

	std::cout << std::endl;

	try {
		std::cout << "the value in the index given is : "  << arr[2] << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	Array<int> arrp(MAX);

	arrp = arr;

	for (int i = 0; i < MAX; i++)	
		arr[i] = i + 1;
	std::cout << std::endl << "** the new array **" << std::endl;
	std::cout << std::endl;
	std::cout << "arr\t" "arrp" << std::endl;
	for (int i = 0; i < MAX ; i++)
		std::cout << arr[i] << "  \t" << arrp[i] << std::endl;
    return 0;
}