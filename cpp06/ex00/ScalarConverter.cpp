/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:33:05 by andreamargi       #+#    #+#             */
/*   Updated: 2023/10/18 12:29:32 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter& src)
{
	*this = src;
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& src)
{
	(void)src;
	return (*this);
}

//stod converte una stringa in un double
//stof converte una stringa in un float
void ScalarConverter::convert(std::string &literal)
{
	char	c = 0;
	int		i = 0;
	float	f = 0.0f;
	double	d = 0.0;

	int (*p[6])(std::string &literal) = {&check, &isInt, &isDouble, &isFloat, &isChar, &isSpecial};
	for(int j = 0; j < 6; j++)
	{
			if ((p[j])(literal))
			{
				if (j == 1)
				{
					i = std::stod(literal);
					c = static_cast<char>(i); //int to char
					f = static_cast<float>(i); //int to float
					d = static_cast<double>(i); //int to double
				}
				else if(j == 2)
				{
					d = std::stod(literal);
					f = static_cast<float>(d);
					i = static_cast<int>(d);
					c = static_cast<char>(d);
				}
				else if(j == 3)
				{
					f = std::stof(literal);
					d = static_cast<double>(i);
					i = static_cast<int>(f);
				}
				else if(j == 4)
				{
					c = literal[0];
					i = static_cast<int>(c);
					f = static_cast<float>(c);
					d = static_cast<double>(c);
				}
				break;
			}
	}
	ControlsPrint(c, i, f, d);
}

void	ScalarConverter::ControlsPrint(char c, int i, float f, double d)
{
	std::cout << "char: ";
	if (isprint(c))
		std::cout << "'" << c << "'" << std::endl;
	else if (c < 32 || c > 126 || (c >= 48 && c <= 57))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "impossible" << std::endl;
	std::cout << "int: ";
	if (i >= INT_MIN && i <= INT_MAX)
		std::cout << i << std::endl;
	else
		std::cout << "impossible" << std::endl;
	std::cout << "float: ";
	if (f >= -FLT_MIN && f <= FLT_MAX)
	{
		if (i == f)
			std::cout << f << ".0f" << std::endl;
		else
			std::cout << f << "f" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
	std::cout << "double: ";
	if (d >= -DBL_MIN && d <= DBL_MAX)
	{
		if (d == f)
			std::cout << d << ".0" << std::endl;
		else
			std::cout << d << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
}


int	ScalarConverter::isChar(std::string &str)
{
	if (str.length() == 1 && isprint(str[0]))
		return (1);
	return (0);
}

int	ScalarConverter::isDouble(std::string &str)
{
	int i = 0;
	int dot = 0;

	if(str[i] == '-' || str[i] == '+')
		i++;
	while(str[i])
	{
		if (str[i] == '.')
			dot++;
		else if (!isdigit(str[i]))
			return (0);
		i++;
	}
	if(dot > 1)
		return (0);
	return (1);
}

int	ScalarConverter::isInt(std::string &str)
{
	int i = 0;

	if(str[i] == '-' || str[i] == '+')
		i++;
	while(str[i])
	{
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ScalarConverter::isFloat(std::string &str)
{
	int i = 0;
	int dot = 0;

	if(str[i] == '-' || str[i] == '+')
		i++;
	while(str[i])
	{
		if (str[i] == '.')
		{
			i++;
			dot++;
		}
		if((str[i] == 'f' || str[i] == 'F') && str[i + 1] == '\0')
			i++;
		if(!isdigit(str[i]))
			return (0);
	}
	if(dot > 1)
		return (0);
	return (1);
}

int	ScalarConverter::check(std::string &str)
{
	if(str == "+inf" || str == "+inff" || str == "+infl")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << "inff" << std::endl;
		std::cout << "double: " << "inf" << std::endl;
		exit(0);
	}
	else if(str == "-inf" || str == "-inff" || str == "infl")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << "-inff" << std::endl;
		std::cout << "double: " << "-inf" << std::endl;
		exit(0);
	}
	return (0);
}

int	ScalarConverter::isSpecial(std::string &str)
{
	(void)str;
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << "nanf" << std::endl;
	std::cout << "double: " << "nan" << std::endl;
	exit(0);
}

