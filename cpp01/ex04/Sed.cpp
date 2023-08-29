/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 13:39:23 by andreamargi       #+#    #+#             */
/*   Updated: 2023/08/07 16:31:48 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"
//find cerca la prima occorrenza di s1 in str
//erase cancella da pos per s1.length() caratteri
//insert inserisce s2 in pos
std::string	Sed::replace(std::string str, std::string s1, std::string s2)
{
	std::string::size_type pos = 0;
	while ((pos = str.find(s1, pos)) != std::string::npos)
	{
		str.erase(pos, s1.length());
		str.insert(pos, s2);
		pos += s2.length();
	}
	return (str);
}
