/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.HPP                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:51:02 by andreamargi       #+#    #+#             */
/*   Updated: 2023/11/02 16:18:39 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <stack>

class RPN
{
	private :
		std::stack<int> stack;
		int result;
	public :
		RPN() {};
		RPN(const RPN& src) {*this = src;};
		RPN& operator=(const RPN& src);
		~RPN() {};

		bool validtoken(char c);
		void calcuate(int n1, int n2, char op);
		void RPNcalc(const std::string& str);
};

#endif
