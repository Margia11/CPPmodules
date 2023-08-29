/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 12:37:48 by andreamargi       #+#    #+#             */
/*   Updated: 2023/08/18 10:01:47 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
//punto fuori dal triangolo (0, 0), (10, 30), (20, 0) (30, 15)
int main (void) {
	if (bsp(Point(0, 0), Point(10, 30), Point(20, 0), Point(10, 15)) == true)
		std::cout << "Point is in the triangle" << std::endl;
	else
		std::cout << "Point is not in the triangle" << std::endl;
	return 0;
}
