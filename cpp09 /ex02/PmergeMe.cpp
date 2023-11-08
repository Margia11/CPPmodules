/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:54:58 by andreamargi       #+#    #+#             */
/*   Updated: 2023/11/08 17:29:20 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe& src)
{
	*this = src;
}

PmergeMe::~PmergeMe()
{
}

PmergeMe& PmergeMe::operator=(const PmergeMe& src)
{
	if (this != &src)
	{
		this->data = src.data;
		this->v = src.v;
		this->l = src.l;
	}
	return (*this);
}

void PmergeMe::FordJohngoddog(std::vector<int> &data)
{
	if(data.size() <= 1)
		return;
	int mid = data.size() / 2;
	std::vector<int> left(data.begin(), data.begin() + mid);
	std::vector<int> right(data.begin() + mid, data.end());

	FordJohngoddog(left);
	FordJohngoddog(right);
	unsigned long i = 0; unsigned long j = 0; unsigned long k = 0;
	while(i < left.size() && j < right.size())
	{
		if(left[i] < right[j])
			data[k++] = left[i++];
		else
			data[k++] = right[j++];
	}
	while (i < left.size())
		data[k++] = left[i++];
	while (j < right.size())
		data[k++] = right[j++];
}

void PmergeMe::FordJohngoddogs(std::list<int> &data)
{
	if (data.size() <= 1)
		return;
	std::list<int>::iterator mid_it = data.begin();
	std::advance(mid_it, data.size() / 2);

	std::list<int> left(data.begin(), mid_it);
	std::list<int> right(mid_it, data.end());

	FordJohngoddogs(left);
	FordJohngoddogs(right);
	std::list<int>::iterator left_it = left.begin();
	std::list<int>::iterator right_it = right.begin();
	std::list<int>::iterator data_it = data.begin();
	while (left_it != left.end() && right_it != right.end())
	{
		if (*left_it < *right_it)
			*data_it++ = *left_it++;
		else
			*data_it++ = *right_it++;
	}
	while (left_it != left.end())
		*data_it++ = *left_it++;
	while (right_it != right.end())
		*data_it++ = *right_it++;
}


void PmergeMe::SortVectorandgetTime(std::vector<int>& data, int argc)
{
	float	duration;

	std::cout << "Before: ";
	for(unsigned long i = 0; i < data.size(); i++)
		std::cout  << data[i] << " ";
		std::cout << std::endl;
	std::clock_t start = std::clock();
	FordJohngoddog(data);
	std::clock_t end = std::clock();
	duration = static_cast<double> (end - start)/CLOCKS_PER_SEC;
	duration *= 10;
	std::cout << "After: ";
	for(unsigned long i = 0; i < data.size(); i++)
		std::cout  << data[i] << " ";
	std::cout << std::endl;
	std::cout << "Time to process a range of "<< argc <<" elements with std::[..] : " << duration <<" us"<< std::endl;
}

void PmergeMe::SortListandgetTime(std::list<int>& data)
{
	// float duration;

	// std::cout << "Before: ";
	// for(std::list<int>::iterator it = data.begin(); it != data.end(); it++)
	// 	std::cout << *it << " ";
	// 	std::cout << std::endl;
	// std::clock_t start = std::clock();
	FordJohngoddogs(data);
	// std::clock_t end = std::clock();
	// duration = static_cast<double> (end - start)/CLOCKS_PER_SEC;
	// duration *= 10;
	// std::cout << "After: ";
	// for(std::list<int>::iterator it = data.begin(); it != data.end(); it++)
	// 	std::cout << *it << " ";
	// std::cout << std::endl;
	//std::cout << "Time to process a range of "<< argc <<" elements with std::[..] : " << duration <<" us"<< std::endl;

}

