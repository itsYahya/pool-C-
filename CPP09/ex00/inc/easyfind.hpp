/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 15:22:56 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/08/17 17:15:50 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

template<typename T>
bool	easyfind(T container, int arg){
	typename T::iterator iter;
	iter = find(container.begin(), container.end(), arg);
	if (iter == container.end())
		return (false);
	return (true);
}

#endif