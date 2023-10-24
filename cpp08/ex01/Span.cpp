/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:14:07 by andreamargi       #+#    #+#             */
/*   Updated: 2023/10/23 15:14:04 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : max_size(0), count(0)
{
}

Span::Span(unsigned int size) : max_size(size), count(0)
{
}

Span::Span(const Span &other)
{
	*this = other;
}

Span::~Span()
{
}

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		this->max_size = other.max_size;
		this->count = other.count;
		this->array = other.array;
	}
	return *this;
}

void Span::addNumber(int n)
{
	if (this->count >= this->max_size)
		throw std::exception();
	this->array.push_back(n);
	this->count++;
}

int Span::shortestSpan()
{
	if (this->count <= 1)
		throw std::exception();
	std::sort(this->array.begin(), this->array.end());
	int shortest = this->array[1] - this->array[0];
	for (size_t i = 2; i < this->count; ++i)
	{
		int span = this->array[i] - this->array[i - 1];
		if(span < shortest)
			shortest = span;
	}
	return shortest;
}

int Span::longestSpan()
{
	if (this->count <= 1)
		throw std::exception();
	std::sort(this->array.begin(), this->array.end());
	int longest = this->array[this->count - 1] - this->array[0];
	return longest;
}

