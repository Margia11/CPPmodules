/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:48:36 by andreamargi       #+#    #+#             */
/*   Updated: 2023/10/20 11:11:44 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	std::vector<int>n;

	for(int i = 0; i < 1000; i++)
		n.push_back(i); //push back inserisce elementi alla fine dell'array
	easyfind(n, 999);
	easyfind(n, 1000);
	easyfind(n, 1);
	return (0);
}

