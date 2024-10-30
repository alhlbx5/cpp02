/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:57:21 by aalhalab          #+#    #+#             */
/*   Updated: 2024/10/30 14:57:43 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main() 
{
    Fixed a;
    Fixed const b(10);
    Fixed const c(42.42f);
    Fixed const d(b);
    a = Fixed(1234.4321f);
    
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << "a + b: " << (a + b) << std::endl;
    std::cout << "c - b: " << (c - b) << std::endl;
    std::cout << "a * c: " << (a * c) << std::endl;
    std::cout << "c / a: " << (c / a) << std::endl;
    std::cout << "Increment a: " << ++a << std::endl;
    std::cout << "Decrement a: " << --a << std::endl;
    std::cout << "Max of a and c: " << Fixed::max(a, c) << std::endl;
    std::cout << "Min of a and b: " << Fixed::min(a, b) << std::endl;
    return 0;
}
