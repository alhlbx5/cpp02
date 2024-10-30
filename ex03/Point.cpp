/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:55:08 by aalhalab          #+#    #+#             */
/*   Updated: 2024/10/30 20:03:11 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Point.cpp
#include "Point.hpp"

// Default constructor
Point::Point() : x(0), y(0) {}

// Constructor with parameters
Point::Point(const float x_val, const float y_val) : x(x_val), y(y_val) {}

// Copy constructor
Point::Point(const Point &other) : x(other.x), y(other.y) {}

// Destructor
Point::~Point() {}

// Assignment operator - commented out since `x` and `y` are `const`
// Point &Point::operator=(const Point &other) {
//     return *this;
// }

// Getter methods
const Fixed &Point::getX() const { return x; }
const Fixed &Point::getY() const { return y; }
