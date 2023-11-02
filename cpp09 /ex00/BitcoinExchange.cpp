/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:22:32 by andreamargi       #+#    #+#             */
/*   Updated: 2023/11/02 12:44:15 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& src)
{
	this->money = src.money;
	return *this;
}
//trasforma una stringa in un intero senza segno
static unsigned int ft_stou(const std::string& str)
{
	unsigned int value;
	std::stringstream ss(str);

	ss >> value;
	return value;
}

void BitcoinExchange::readDatabase(std::ifstream& csvdb)
{
	std::string line;
	size_t delimiter;

	//salto la prima riga
	std::getline(csvdb, line);
	while(std::getline(csvdb, line))
	{
		delimiter = line.find(',');
		std::string date = line.substr(delimiter + 1);
		//setto la data e il valore nel map
		this->money[line.substr(0, delimiter)] = std::stof(date);
	}
	csvdb.close();
}

bool BitcoinExchange::DatechecksFormat(const std::string &date)
{
	if(date.empty())
		return false;
	size_t first_minus = date.find('-');
	size_t second_minus = date.find('-', first_minus + 1);
	if (first_minus == std::string::npos || second_minus == std::string::npos
		|| date.find_first_not_of("0123456789-") != std::string::npos)
	{
		std::cout << "Error: bad input => " << date << std::endl;
		return false;
	}
	return true;
}

bool BitcoinExchange::isValidDate(const std::string& date)
{
	std::string s;
	int year, month, day;
	std::istringstream ss(date);
	int i = 0;

	while (std::getline(ss, s, '-'))
	{
		if(i == 0)
		{
			year = ft_stou(s);
			if (year < 2009 || year > 2022)
				return false;
		}
		if (i == 1)
		{
			month = ft_stou(s);
			if (month < 1 || month > 12)
				return false;
		}
		if (i == 2)
		{
			day = ft_stou(s);
			if (day < 1 || day > 31)
				return false;
		}
		i += 1;
	}
	if(i != 3)
	{
		std::cout << "Error : Date incorrect => " << date << std::endl;
		return false;
	}
	return true;
}

//.empty restituisce true se la stringa è vuota
//.find_first_not_of restituisce la posizione del primo carattere che non è tra quelli specificati
bool BitcoinExchange::Valuechecks(const std::string& value)
{
	if (value.empty() || value.find_first_not_of("0123456789.-") != std::string::npos
	||  value.at(0) == '.' || value.find('.', value.length() - 1) != std::string::npos)
		std::cout << "Invalid value." << std::endl;
	else if (value.at(0) == '-')
		std::cout << "Error: not a positive number." << std::endl;
	else if (value.length() > 10 || (value.length() == 10 && value > "2147483647"))
		std::cout << "Error: too large a number." << std::endl;
	else
		return true;
	return false;
}

//restiuisce il valore del bitcoin in una data,
//se non esiste restituisce il valore della data più vicina
//.at serve per accedere ad un elemento di un map
//.count restituisce il numero di elementi con una determinata chiave
float BitcoinExchange::getRateFromDataBase(const std::string& date)
{
	if (this->money.count(date) > 0)
		return this->money.at(date);
	return (--this->money.lower_bound(date))->second;
}
