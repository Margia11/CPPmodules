/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:43:46 by andreamargi       #+#    #+#             */
/*   Updated: 2023/11/08 17:29:30 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	std::vector<int> data;
	std::list<int> data2;
	PmergeMe p;

	if(argc < 2)
	{
		std::cout << "Invalid arguments" << std::endl;
		return (1);
	}
	for(int i = 1; i < argc ; ++i)
	{
		if(argv[i][0] == '-')
		{
			std::cerr << "Error: Not a valid number " << '\n';
			return (1);
		}
		try
		{
			data.push_back(std::stoi(argv[i]));
			data2.push_back(std::stoi(argv[i]));
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error: Not a valid number " << '\n';
			return (1);
		}
	}
	p.SortVectorandgetTime(data, argc - 1);
	p.SortListandgetTime(data2);
	return (0);
}

