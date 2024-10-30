/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:36:20 by aalhalab          #+#    #+#             */
/*   Updated: 2024/10/30 14:42:33 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : rawValue(0) 
{
    std::cout << "Default constructor has been invoked" << std::endl;
}

Fixed::Fixed(const int integerValue) : rawValue(integerValue << fractionalBits) 
{
    std::cout << "Integer constructor has been invoked" << std::endl;
}

Fixed::Fixed(const float floatValue) : rawValue(roundf(floatValue * (1 << fractionalBits))) 
{
    std::cout << "Float constructor has been invoked" << std::endl;
}

Fixed::Fixed(const Fixed &source) : rawValue(source.rawValue) 
{
    std::cout << "Copy constructor has been invoked" << std::endl;
}

Fixed::~Fixed() 
{
    std::cout << "Destructor has been called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &source) 
{
    std::cout << "Copy assignment operator has been invoked" << std::endl;
    if (this != &source) 
    {
        rawValue = source.rawValue; 
    }
    return *this;
}

int Fixed::getRawBits() const 
{
    return rawValue; 
}

void Fixed::setRawBits(int const newRawValue) 
{
    rawValue = newRawValue; 
}

float Fixed::toFloat() const 
{
    return static_cast<float>(rawValue) / (1 << fractionalBits); 
}

int Fixed::toInt() const 
{
    return rawValue >> fractionalBits; 
}

std::ostream &operator<<(std::ostream &output, const Fixed &fixed) 
{
    output << fixed.toFloat();
    return output;
}
