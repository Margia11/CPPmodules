/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:33:16 by andreamargi       #+#    #+#             */
/*   Updated: 2023/10/10 11:32:48 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <cfloat>
# include <limits>

//numeri a precisione singola(32 bit)
//numeri a precisione doppia(64 bit)
//-inff (infinito negativo) precisione singola
//+inff (infinito positivo) precisione singola
//nanf (not a number) precisione singola
//-inf (infinito negativo) precisione doppia
//+inf (infinito positivo) precisione doppia
//nan (not a number) precisione doppia

class ScalarConverter
{
	private :
		static int isChar(std::string& str);
		static int isInt(std::string& str);
		static int isFloat(std::string& str);
		static int isDouble(std::string& str);
		static int isSpecial(std::string& str);
		static int check(std::string& str);
	public :
		ScalarConverter();
		ScalarConverter(const ScalarConverter& src);
		~ScalarConverter();
		static void	convert(std::string& str);
		ScalarConverter&	operator=(const ScalarConverter& src);
		static void ControlsPrint(char c, int i, float f, double d);
};

#endif
