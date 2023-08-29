/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 13:36:10 by andreamargi       #+#    #+#             */
/*   Updated: 2023/08/07 17:14:18 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int argc, char **argv)
{
	Sed	sed;
	std::string str;
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	std::ifstream inputfile(argv[1]);
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	//verifico che il file sia aperto correttamente
	if (!inputfile.is_open())
	{
		std::cout << "Error opening file" << std::endl;
		return (1);
	}
	//creo il file di output con estensione .replace
	std::ofstream ofs(std::string(argv[1]) + ".replace");
	if (!ofs.is_open())
	{
		std::cout << "Error opening file" << std::endl;
		return (1);
	}
	//leggo il file riga per riga e scrivo nel file di output
	//se non sono alla fine del file aggiungo un endl
	while (std::getline(inputfile, str))
	{
		ofs << sed.replace(str, s1, s2);
		if (!inputfile.eof())
			ofs << std::endl;
	}
	inputfile.close();
	ofs.close();
	return (0);
}
