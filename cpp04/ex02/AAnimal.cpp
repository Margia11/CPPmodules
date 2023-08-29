/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:05:29 by andreamargi       #+#    #+#             */
/*   Updated: 2023/08/28 18:44:24 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("Animal")
{
	std::cout << "Animal constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "Animal destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = other;
}

AAnimal	&AAnimal::operator=(const AAnimal &other)
{
	std::cout << "Animal assignation operator called" << std::endl;
	this->type = other.type;
	return (*this);
}

std::string	AAnimal::getType() const
{
	return (this->type);
}

void	AAnimal::makeSound() const
{
	std::cout << "Animal makeSound" << std::endl;
}

