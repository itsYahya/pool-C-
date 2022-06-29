/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <yel-mrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 05:44:19 by yel-mrab          #+#    #+#             */
/*   Updated: 2022/06/29 03:27:33 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <regex>

std::string cleaner(std::string input) {
  std::regex special_chars("[.^$|()\\[\\]{}*+?\\\\]");
  std::string cleaner = std::regex_replace(input, special_chars, "\\$&");
  return (cleaner);
}

int main(int argc, char **argv)
{
    if (argc < 4){
        std::cout << "invalid args" << std::endl;
        exit(1);
    }
    std::ifstream   File1 (std::string(argv[1]), std::ios_base::in);
    std::ofstream   File2 (std::string(argv[1]) + ".replace", std::ios_base::out);
    std::string     line, new_line, s1, s2;
    if (File1.is_open() == false){
        std::cout << "couldn't open file 1\n" << std::endl;
        exit(1);
    }
    std::getline(File1, line, '\0');
    s1 = std::string(argv[2]);
    s2 = std::string(argv[3]);
    std::regex replace(cleaner(s1));
    new_line = std::regex_replace(line, replace, s2);
    if (File2.is_open() == false){
        File1.close();
        std::cout << "couldn't open file 2\n" << std::endl;
        exit(1);
    }
    File2 << new_line;
    File1.close();
    File2.close();
}