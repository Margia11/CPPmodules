/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:57:03 by andreamargi       #+#    #+#             */
/*   Updated: 2023/11/02 12:25:10 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <vector>
# include <string>
# include <map>
# include <sstream>
# include <cctype>
# include <algorithm>
# include <cstring>

//std::map si usa per creare una mappa di coppie chiave-valore
//e fa in modo di andare a ricerca della chiave in maniera efficiente

class BitcoinExchange
{
	private :
		std::map<std::string, float> money;

	public :
		BitcoinExchange() {};
		BitcoinExchange(const BitcoinExchange& src) {*this = src;};
		BitcoinExchange& operator=(const BitcoinExchange& src);
		~BitcoinExchange() {};

		void readDatabase(std::ifstream& csvdb);
		bool DatechecksFormat(const std::string &date);
		bool isValidDate(const std::string& date);
		bool Valuechecks(const std::string &value);
		float getRateFromDataBase(const std::string& date);
};



#endif
