/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 21:54:13 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/18 17:00:12 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(){
	Span span(10);

	span.addNumber(6);
	span.addNumber(3);
	span.addNumber(17);
	span.addNumber(9);
	span.addNumber(11);
	Span span1(100);
	
	span1.addRangOfNumbers(span.getBeginIteratore(), span.getEndIteratore());
	// std::cout << span1.longestSpan() << std::endl;
	try{
		std::cout << "span number 1" << std::endl;
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
		std::cout << "span number 2" << std::endl;
		std::cout << span1.shortestSpan() << std::endl;
		std::cout << span1.longestSpan() << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}