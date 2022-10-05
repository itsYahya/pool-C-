/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 21:54:31 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/18 16:54:57 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

#define ITERATORE std::vector<int>::iterator

class Span{
	private :
		std::vector<int>	span;
		unsigned int		size;
		size_t				length;

	public :
		Span();
		~Span();
		Span(unsigned int n);
		Span(Span const &span);
		Span		&operator=(Span const &span);
		void		addNumber(int number);
		void		addRangOfNumbers(ITERATORE iter, ITERATORE end);
		int			shortestSpan();	
		int			longestSpan();
		ITERATORE	getBeginIteratore(void);
		ITERATORE	getEndIteratore(void);
};

#endif