/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:50:18 by andreamargi       #+#    #+#             */
/*   Updated: 2023/10/24 11:52:19 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>
#include <iterator>

//std::deque è come un vettore ma evita problemi di reallocazione
//e accede agli elementi in modo più efficiente
//uso un template per fare in modo che la classe possa contenere qualsiasi tipo
//uso public std::stack per ereditare tutti i metodi di stack(pop, push, ecc)
template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>() {};
		MutantStack(MutantStack const& other) : std::stack<T>(other) {};
		~MutantStack() {};
		MutantStack& operator=(MutantStack const& other)
		{
			std::stack<T>::operator=(other);
			return *this;
		}
		typedef typename std::deque<T>::iterator iterator;
		iterator begin()
		{
			return std::stack<T>::c.begin();
		}
		iterator end()
		{
			return std::stack<T>::c.end();
		}
};

#endif
