/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:14:19 by andreamargi       #+#    #+#             */
/*   Updated: 2023/10/18 10:45:39 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int		intArray[5] = {1, 2, 3, 4, 5};
	float	floatArray[5] = {1.17, 2.23, 3.34, 4.45, 5.56};
	char	charArray[5] = {'a', 'b', 'c', 'd', 'e'};

	std::cout << "intArray: ";
	iter(intArray, 5, printarray);
	std::cout << "floatArray: ";
	iter(floatArray, 5, printarray);
	std::cout << "charArray: ";
	iter(charArray, 5, printarray);
	return (0);
}
