/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:00:02 by andreamargi       #+#    #+#             */
/*   Updated: 2023/10/19 11:28:16 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>

class Array
{
	private:
		T *array;
		unsigned int size;
	public:
		Array(void) : array(NULL), size(0) {}
		Array(unsigned int n) :size(n)
		{
			this->array = new T[n];
		}
		Array(Array const &other)
		{
			this->size = other.size;
			this->array = new T[other.size];
			for (size_t i = 0; i < other.size; i++)
				this->array[i] = other.array[i];
		}
		~Array() {delete (this->array);};
		Array &operator=(Array const &other)
		{
			if (this == &other)
				return (*this);
			delete (this->array);
			this->size = other.size;
			this->array = new T[other.size];
			for (size_t i = 0; i < other.size; i++)
				this->array[i] = other.array[i];
			return (*this);
		}
		T &operator[](unsigned int s) const
		{
			if (s >= this->size)
				throw OutOfRange();
			return (this->array[s]);
		}
		unsigned int getSize(void) const {return (this->size);};
		class OutOfRange : public std::exception
		{
			public:
				const char *what(void) const throw()
				{
					return ("Out of range");
				}
		};
};

template <typename T>

std::ostream &operator<<(std::ostream &out, Array<T> const &array)
{
	for (size_t i = 0; i < array.getSize(); i++)
		out << array[i] << std::endl;
	return (out);
};

#endif
