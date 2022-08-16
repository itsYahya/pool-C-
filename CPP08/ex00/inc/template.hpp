/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 16:03:41 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/16 17:35:08 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

#include <iostream>

template<typename type>
void	swap(type *arg1, type *arg2){
	type	swap;

	swap = *arg1;
	*arg1 = *arg2;
	*arg2 = swap;
}

template<typename type>
type	min(type arg1, type arg2){
	return (arg1 < arg2) ? arg1 : (arg2);
}

template<typename type>
type	max(type arg1, type arg2){
	return (arg1 > arg2) ? arg1 : arg2;
}

#endif