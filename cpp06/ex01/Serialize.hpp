/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:57:36 by andreamargi       #+#    #+#             */
/*   Updated: 2023/10/11 15:38:07 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

# include <iostream>
# include <string>
# include <cfloat>
# include <limits>
# include <cstdint>

//uintptr è un intero senza segno di dimensione sufficiente a contenere un puntatore
//il reinterpret cast serve per convertire un puntatore
struct Data
{
	int n;
};

class Serializer
{
	public:
		Serializer();
		Serializer(const Serializer& src);
		~Serializer();
		Serializer& operator=(const Serializer& rhs);

		//trasformo un puntatore in un unsigned int
		static uintptr_t serialize(Data* ptr)
		{
			return (reinterpret_cast<uintptr_t>(ptr));
		}
		//trasformo un unsigned int in un puntatore
		static Data* deserialize(uintptr_t raw)
		{
			return (reinterpret_cast<Data*>(raw));
		}
};

#endif
