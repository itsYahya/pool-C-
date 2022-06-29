/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 02:49:01 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/06/28 22:38:17 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int main(int argc, char **argv){
    Harl harl;
    std::string filter;
    
    if (argc < 2)
        return (0);
    filter = std::string(argv[1]);
    harl = Harl();
    harl.complain(harl, filter);
}