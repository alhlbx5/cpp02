/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:48:21 by aalhalab          #+#    #+#             */
/*   Updated: 2024/10/30 10:50:01 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"
#include <iostream>

int main() 
{
    Fixed a;
    Fixed b(a);
    Fixed c;
    c = a;
    std::cout << "a's raw bits: " << a.getRawBits() << std::endl;
    std::cout << "b's raw bits: " << b.getRawBits() << std::endl;
    std::cout << "c's raw bits: " << c.getRawBits() << std::endl;
    return 0;
}
