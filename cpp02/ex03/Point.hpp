/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 12:40:23 by andreamargi       #+#    #+#             */
/*   Updated: 2023/08/17 15:16:40 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point &rhs);
		~Point();

		Point& operator=(const Point &rhs);

		Fixed const getX(void) const;
		Fixed const getY(void) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
