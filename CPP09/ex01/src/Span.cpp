/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 21:54:08 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/18 16:57:27 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>

Span::~Span(){}

Span::Span(): size(10), length(0){}

Span::Span(unsigned int n) : size(n), length(0){}

Span::Span(Span const &span) : size(span.size), length(0){
	*this = span;
}

Span	&Span::operator=(Span const &span){
	std::vector<int>::iterator iter;
	std::vector<const int>::iterator iterspan;
	
	iter = begin(this->span);
	iterspan = begin(span.span);
	for (;this->length < this->size && iter != this->span.end() 
				&& iterspan != span.span.end(); iter++, iterspan++){
		*iter = *iterspan;
		this->length++;
	}
	while (this->length < this->size && iterspan != span.span.end()){
		this->length++;
		this->span.push_back(*iterspan);
		iterspan++;
	}
	return (*this);
}

void	Span::addNumber(int number){
	if (size == length){
		std::cout << "an exception need to be thrown" << std::endl;
		return ;
	}
	length++;
	span.push_back(number);
}

int	Span::longestSpan(){
	if (length <= 1)
		throw std::invalid_argument("no span found");

	// std::cout << *std::max_element(span.begin(), span.end()) << std::endl;
	return (*std::max_element(span.begin(), span.end())
			- *std::min_element(span.begin(), span.end()));
}

int	Span::shortestSpan(){
	if (length <= 1)
		throw std::invalid_argument("no span found");

	std::vector<int> vector;
	std::vector<int>::iterator iter = begin(this->span);
	int curr = *iter++;
	for (; iter != end(this->span); iter++){
		vector.push_back(std::abs(curr - *iter));
		curr = *iter;
	}
	return (*std::min_element(vector.begin(), vector.end()));
}

void	Span::addRangOfNumbers(ITERATORE iter, ITERATORE end){
	for (; iter != end && this->length < this->size; iter++){
		this->span.push_back(*iter);
		this->length++;
	}
}

ITERATORE	Span::getBeginIteratore(){
	return (begin(this->span));
}

ITERATORE	Span::getEndIteratore(){
	return (end(this->span));
}
