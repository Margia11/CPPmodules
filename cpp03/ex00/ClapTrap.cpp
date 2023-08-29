/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 11:29:38 by andreamargi       #+#    #+#             */
/*   Updated: 2023/08/21 17:54:40 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap" << this->name << " default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap" << this->name << " constructor called" << std::endl;
	this->name = name;
	this->hitpoints = 10;
	this->energypoints = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "ClapTrap" << this->name << " copy constructor called" << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap" << this->name << " destructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "ClapTrap" << this->name << " assignation operator called" << std::endl;
	this->name = other.name;
	this->hitpoints = other.hitpoints;
	this->energypoints = other.energypoints;
	this->attack_damage = other.attack_damage;
	return (*this);
}

void		ClapTrap::attack(std::string const& target)
{
	if (energypoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " attack " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
		energypoints--;
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " has no energy points!" << std::endl;
		return ;
	}
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (hitpoints > amount)
	{
		std::cout << "ClapTrap " << this->name << " take " << amount << " points of damage!" << std::endl;
		hitpoints -= amount;
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " is Dead!" << std::endl;
		return ;
	}
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (hitpoints <= amount)
	{
		std::cout << "ClapTrap " << this->name << " is Dead!" << std::endl;
		return ;
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " be repaired " << amount << " points of damage!" << std::endl;
		hitpoints += amount;
		energypoints--;
	}
}
