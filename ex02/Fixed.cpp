/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:56:28 by aalhalab          #+#    #+#             */
/*   Updated: 2024/10/30 14:57:12 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : value(0) {}
Fixed::Fixed(const int intVal) : value(intVal << fractionalBits) {}
Fixed::Fixed(const float floatVal) : value(roundf(floatVal * (1 << fractionalBits))) {}
Fixed::Fixed(const Fixed &other) : value(other.value) {}
Fixed::~Fixed() {}
Fixed &Fixed::operator=(const Fixed &other) 
{
    if (this != &other) value = other.value;
    return *this;
}
int Fixed::getRawBits() const { return value; }
void Fixed::setRawBits(int const raw) { value = raw; }
float Fixed::toFloat() const { return static_cast<float>(value) / (1 << fractionalBits); }
int Fixed::toInt() const { return value >> fractionalBits; }
bool Fixed::operator>(const Fixed &other) const { return value > other.value; }
bool Fixed::operator<(const Fixed &other) const { return value < other.value; }
bool Fixed::operator>=(const Fixed &other) const { return value >= other.value; }
bool Fixed::operator<=(const Fixed &other) const { return value <= other.value; }
bool Fixed::operator==(const Fixed &other) const { return value == other.value; }
bool Fixed::operator!=(const Fixed &other) const { return value != other.value; }
Fixed Fixed::operator+(const Fixed &other) const { return Fixed(this->toFloat() + other.toFloat()); }
Fixed Fixed::operator-(const Fixed &other) const { return Fixed(this->toFloat() - other.toFloat()); }
Fixed Fixed::operator*(const Fixed &other) const { return Fixed(this->toFloat() * other.toFloat()); }
Fixed Fixed::operator/(const Fixed &other) const { return Fixed(this->toFloat() / other.toFloat()); }
Fixed &Fixed::operator++() { ++value; return *this; } 
Fixed Fixed::operator++(int) { Fixed temp = *this; ++value; return temp; }
Fixed &Fixed::operator--() { --value; return *this; }
Fixed Fixed::operator--(int) { Fixed temp = *this; --value; return temp; }
Fixed &Fixed::min(Fixed &a, Fixed &b) { return (a < b) ? a : b; }
const Fixed &Fixed::min(const Fixed &a, const Fixed &b) { return (a < b) ? a : b; }
Fixed &Fixed::max(Fixed &a, Fixed &b) { return (a > b) ? a : b; }
const Fixed &Fixed::max(const Fixed &a, const Fixed &b) { return (a > b) ? a : b; }
std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}
