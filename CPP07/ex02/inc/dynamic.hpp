/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dynamic.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 01:43:28 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/16 02:45:01 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DYNAMIC_HPP
#define DYNAMIC_HPP

class Base{
	public :
		virtual ~Base();
		int number;
};

class A : public Base{
	public :
		~A();
};

class B : public Base{
	public :
		~B();
};

class C : public Base{
	public : 
		~C();
};


Base	*generate();
void	identify(Base *p);
void	identify(Base &p);

#endif