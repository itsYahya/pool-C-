/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:43:36 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/16 21:04:39 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string.h>

template<typename T>
class Array{
	private :
		T				*elements;
		unsigned int	size;

	public :
		Array(){
			elements = new T();
			size = 1;
		};
		~Array(){
			delete elements;
		};
		Array(unsigned int n){
			elements = new T[n];
			bzero(elements, sizeof(T) * n);
			size = n;
		};
		Array(Array const &arr){
			elements = new T[arr.size];
			bzero(elements, sizeof(T) * arr.size);
			size = arr.size;
			*this = arr;
		};
		Array	&operator=(Array const &arr){
			unsigned int i = 0;
			for (; i < this->size && i < arr.size; i++){
				this->elements[i] = arr.elements[i];
			}
			return (*this);
		};
		T	&operator[](unsigned int index){
			if (index >= this->size || index < 0)
				throw	std::invalid_argument("this index is out of bounds");
			return (this->elements[index]);
		};
		unsigned int	getSize() const{
			return (this->size);
		};
};

#endif