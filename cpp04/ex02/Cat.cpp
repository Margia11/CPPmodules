/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:36:43 by andreamargi       #+#    #+#             */
/*   Updated: 2023/08/28 18:12:11 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	brain = new Brain();
	std::cout << this->type << " constructor called" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << this->type << " destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Miaow miaow" << std::endl;
}

Brain* Cat::getBrain() const
{
	return (this->brain);
}


