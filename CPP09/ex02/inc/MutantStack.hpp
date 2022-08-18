/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 22:11:14 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/18 23:30:08 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template<typename type>
class MutantStack : public std::stack<type>{
	public :
		MutantStack(){};
		typedef typename std::stack<type>::container_type::iterator iterator;
		iterator begin() { return this->c.begin(); };
		iterator end() { return this->c.end(); }
};

#endif