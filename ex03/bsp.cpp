/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:55:22 by aalhalab          #+#    #+#             */
/*   Updated: 2024/10/30 20:04:28 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cmath>

static Fixed area(const Point &a, const Point &b, const Point &c) 
{
    return Fixed(fabsf((a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()) +
                        b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()) +
                        c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())) / 2.0f));
}
bool bsp(Point const a, Point const b, Point const c, Point const point) 
{
    Fixed totalArea = area(a, b, c);
    Fixed area1 = area(point, a, b);
    Fixed area2 = area(point, b, c);
    Fixed area3 = area(point, c, a);
    return (totalArea == area1 + area2 + area3);
}
