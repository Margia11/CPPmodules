/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:15:57 by andreamargi       #+#    #+#             */
/*   Updated: 2023/08/08 10:35:09 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl harl;
	std::string level;

	std::cout << "Enter the level of your complaint: ";
	std::cin >> level;
	harl.complain(level);
	return (0);
}

