/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:00:02 by andreamargi       #+#    #+#             */
/*   Updated: 2023/10/11 15:39:04 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main(void)
{
	Data	obj;
	obj.n = 42;

	uintptr_t ptrSer = Serializer::serialize(&obj);
	std::cout << "ptrSer: " << ptrSer << std::endl;
	Data* ptrDes = Serializer::deserialize(ptrSer);
	std::cout << "ptrDes: " << ptrDes << std::endl;
	return (0);
}
