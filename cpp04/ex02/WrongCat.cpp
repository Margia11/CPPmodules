/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:41:07 by andreamargi       #+#    #+#             */
/*   Updated: 2023/08/28 16:38:24 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << this->type << " constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << this->type << " destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "miaow miaow" << std::endl;
}

