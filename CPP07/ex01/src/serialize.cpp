/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 20:19:23 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/16 00:01:11 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"
#include <iostream>

uintptr_t serialize(Data* ptr){
	uintptr_t	data;

	data = reinterpret_cast<uintptr_t>(ptr);
	return (data);
}

Data	*deserialize(uintptr_t raw){
	Data	*data = new Data();

	data = reinterpret_cast<Data*>(raw);
	return (data);
}

int main(){
	Data data;
	int i = 0;
	data.hello = "hello there we are here";
	while (i < (int)data.hello.length())
		std::cout << data.hello[i++] << std::endl;
	
	uintptr_t raw = serialize(&data);

	Data	*ptr = deserialize(raw);

	std::cout << "this is the first char of the string \n" << ptr->hello[0] << std::endl;
	return 0;
}