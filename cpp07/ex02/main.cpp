/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:47:27 by andreamargi       #+#    #+#             */
/*   Updated: 2023/10/19 12:13:38 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	Array<int> a(10);

	try
	{
		a[5] = 7;
		std::cout << a[5] << std::endl;
		std::cout << a[40] << std::endl;
	}
	catch(Array<int>::OutOfRange &e)
	{
		std::cout << e.what() << std::endl;
	}
	Array<float> b(5);

	try
	{
		b[2] = 43.7f;
		std::cout << b[2] << std::endl;
		std::cout << b[10] << std::endl;
	}
	catch(Array<float>::OutOfRange &e)
	{
		std::cout << e.what() << std::endl;
	}
}

