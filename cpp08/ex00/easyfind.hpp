/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:04:34 by andreamargi       #+#    #+#             */
/*   Updated: 2023/10/19 15:15:27 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

template <typename T>

void easyfind(T &container, int n)
{

	if(std::find(container.begin(), container.end(), n) != container.end())
		std::cout << "Element found" << std::endl;
	else
		std::cout << "Element not found" << std::endl;
}

#endif
