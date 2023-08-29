/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:53:33 by andreamargi       #+#    #+#             */
/*   Updated: 2023/08/21 17:55:54 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap" << this->name << " constructor called" << std::endl;
	this->hitpoints = 100;
	this->energypoints = 100;
	this->attack_damage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap" << this->name << " destructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
	if (energypoints > 0)
	{
		std::cout << "FragTrap " << this->name << " is asking for a high five!" << std::endl;
		energypoints--;
	}
	else
	{
		std::cout << "FragTrap " << this->name << " has no energy points!" << std::endl;
		return ;
	}
}



