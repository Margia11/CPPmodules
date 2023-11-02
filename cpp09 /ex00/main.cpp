/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:53:37 by andreamargi       #+#    #+#             */
/*   Updated: 2023/11/02 12:39:29 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

#define CSV_FILE "./data.csv"

int main(int argc, char **argv)
{
	if(argc != 2)
	{
		std::cout << "Error: could not open file." << std::endl;
		return 0;
	}
	std::ifstream input_db(argv[1], std::ifstream::in);
	if(!input_db.is_open())
	{
		std::cout << "Error: could not open DATABASE." << std::endl;
		return 0;
	}
	std::ifstream csv_db(CSV_FILE, std::ifstream::in);
	if (!csv_db.is_open())
	{
		std::cout << "Error: could not open CSV file." << std::endl;
		return 0;
	}
	BitcoinExchange btc;
	btc.readDatabase(csv_db);
	std::string line;
	//salto la prima riga
	std::getline(input_db, line);
	while(std::getline(input_db, line))
	{
		size_t delimeter = line.find('|');
		if (delimeter == std::string::npos || line.length() < delimeter + 2)
		{
			std::cout << "Error:  => " << std::endl;
			continue;
		}
		std::string date = line.substr(0, delimeter - 1);
		if(!btc.DatechecksFormat(date) || !btc.isValidDate(date))
			continue;
		std::string value = line.substr(delimeter + 2);
		if(!btc.Valuechecks(value))
			continue;
		float btc_value = std::stof(value);
		std::cout << date << " => " << btc_value << " = " << std::setprecision(2) << btc_value * btc.getRateFromDataBase(date) << std::endl;
	}
	input_db.close();
	csv_db.close();
	return 0;
}
