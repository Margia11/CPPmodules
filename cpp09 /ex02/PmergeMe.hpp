/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:44:48 by andreamargi       #+#    #+#             */
/*   Updated: 2023/11/08 17:29:25 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <ctime>
#include <set>
#include <iomanip>




class PmergeMe
{
	private:
		std::set<std::string> data;
		std::vector<int> v;
		std::list<int> l;
	public:
		PmergeMe();
		PmergeMe(const PmergeMe& src);
		~PmergeMe();
		PmergeMe& operator=(const PmergeMe& src);
		void FordJohngoddog(std::vector<int> &data);
		void FordJohngoddogs(std::list<int> &data);
		void SortVectorandgetTime(std::vector<int>& data, int argc);
		void SortListandgetTime(std::list<int>& data);
};

#endif
