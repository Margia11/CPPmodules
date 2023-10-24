/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:57:23 by andreamargi       #+#    #+#             */
/*   Updated: 2023/10/11 15:31:52 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

Serializer::Serializer()
{
}

Serializer::Serializer(const Serializer& src)
{
	*this = src;
}

Serializer::~Serializer()
{
}

Serializer& Serializer::operator=(const Serializer& rhs)
{
	if (this != &rhs)
	{
	}
	return (*this);
}

