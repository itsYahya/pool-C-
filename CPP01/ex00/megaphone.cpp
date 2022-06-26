/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 05:57:09 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/06/21 07:16:26 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <unistd.h>
using namespace std;

void    ft_toupper(char *arg)
{
    int i = 0;

    while (arg[i])
    {
        arg[i] = toupper(arg[i]);
        i++;
    }
}

int main(int argc, char **argv)
{
    int     i = 1, j = 1;
    
    while (i < argc)
    {
        ft_toupper(argv[i]);
        i++;
    }
    if (i == 1)
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        while (argv[j] != NULL)
        {
            cout << argv[j];
            cout << " ";
            j++;
        }
    }
    cout << "\n";
    return (0);    
}
