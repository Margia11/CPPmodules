/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 12:41:11 by andreamargi       #+#    #+#             */
/*   Updated: 2023/08/18 10:21:59 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(0), y(0)
{
}

Point::Point(const float x, const float y) : x(x), y(y)
{
}

Point::Point(const Point &src) : x(src.x), y(src.y)
{
}
Point::~Point(void)
{
}

Point &Point::operator=(const Point &rhs)
{
	if (this != &rhs)
	{
		(Fixed) this->x = rhs.getX();
		(Fixed) this->y = rhs.getY();
	}
	return *this;
}

Fixed const Point::getX(void) const
{
	return this->x;
}

Fixed const Point::getY(void) const
{
	return this->y;
}
