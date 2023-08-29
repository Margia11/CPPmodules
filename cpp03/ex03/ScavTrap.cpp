/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:09:07 by andreamargi       #+#    #+#             */
/*   Updated: 2023/08/21 14:42:56 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hitpoints = 100;
	this->energypoints = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap" << this->name << " constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap" << this->name << " destructor called" << std::endl;
}

void ScavTrap::attack(std::string const& target)
{
	if (energypoints > 0)
	{
		std::cout << "ScavTrap " << this->name << " attack " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
		energypoints--;
	}
	else
	{
		std::cout << "ScavTrap " << this->name << " has no energy points!" << std::endl;
		return ;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode" << std::endl;
}
