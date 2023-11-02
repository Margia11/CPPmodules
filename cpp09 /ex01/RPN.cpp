/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:52:14 by andreamargi       #+#    #+#             */
/*   Updated: 2023/11/02 16:26:16 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN& RPN::operator=(const RPN &src)
{
	(void)src;
	return (*this);
}

bool RPN::validtoken(char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/')
		return (true);
	else
		return (false);
}

void RPN::calcuate(int n1, int n2, char op)
{
	switch (op)
	{
	case '+':
		stack.push(n1 + n2);
		break;
	case '-':
		stack.push(n1 - n2);
		break;
	case '*':
		stack.push(n1 * n2);
		break;
	case '/':
		if(n2 == 0)
		{
			std::cout << "Error : Division by zero" << std::endl;
			return ;
		}
		else
			stack.push(n1 / n2);
			break;
	}
}

void RPN::RPNcalc(const std::string &str)
{
	std::string tmp;

	for(size_t i = 0; i < str.length(); i++)
	{
		char c = str[i];
		if (c == ' ')
			continue;
		else if(isdigit(c))
			tmp += c;
		if (validtoken(c))
		{
			if (stack.size() < 2)
			{
				std::cout << "Error : Not enough numbers" << std::endl;
				return ;
			}
			int n1 = stack.top();
			stack.pop();
			int n2 = stack.top();
			stack.pop();
			calcuate(n1, n2, c);
		}
		else
			std::cout << "Error : Invalid character" << std::endl;

	}
}

