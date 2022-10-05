/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:09:29 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/17 19:55:13 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	bar(int index, int &data){
	std::cout << "this is index : " << index + 1 << " data :  ";
	std::cout << data << std::endl;
}

void	baz(int index, std::string &data){
	std::cout << "this is index : " << index + 1 << " data :  ";
	std::cout << data << std::endl;
}

int main(){
	int arr[] = {10, 500, 60, 22};
	std::string arr1[] = {"hello", "word", "world wide"};

	std::cout << "int type" << std::endl;
	iter(arr, 4, bar);
	std::cout << std::endl;
	
	iter(arr, 4, foo);
	std::cout << std::endl;

	std::cout << "string type" << std::endl;
	iter(arr1, 3, baz);
	std::cout << std::endl;
	
	iter (arr1, 3, foo<std::string>);
	std::cout << std::endl;

	std::cout << "any type you wanted" << std::endl;
	A	atable[5];
	
	iter(atable, 5, foo);
	return (0);
}