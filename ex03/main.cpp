/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:56:23 by aalhalab          #+#    #+#             */
/*   Updated: 2024/10/30 19:56:38 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main() 
{
    Point a(0, 0);
    Point b(5, 0);
    Point c(0, 5);
    Point inside(2, 2);
    Point outside(5, 5);
    std::cout << "Point inside triangle: " << (bsp(a, b, c, inside) ? "True" : "False") << std::endl;
    std::cout << "Point outside triangle: " << (bsp(a, b, c, outside) ? "True" : "False") << std::endl;
    return 0;
}
