/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:13:35 by andreamargi       #+#    #+#             */
/*   Updated: 2023/10/23 15:15:10 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>

class Span
{
	private:
		unsigned int		max_size;
		unsigned int		count;
		std::vector<int>	array;
	public:
		Span();
		Span(unsigned int size);
		Span(const Span& other);
		~Span();
		Span& operator=(const Span& other);

		void addNumber(int n);
		int shortestSpan();
		int longestSpan();
};

#endif
