/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:03:07 by andreamargi       #+#    #+#             */
/*   Updated: 2023/08/23 10:59:12 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	this->name = name;
	this->ClapTrap::name = name + "_clap_name";
	FragTrap::hitpoints = 100;
	ScavTrap::energypoints = 50;
	FragTrap::attack_damage = 30;

	std::cout << "DiamondTrap " << this->name << " constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->name << " destructor called" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap " << this->name << " ClapTrap name is " << this->ClapTrap::name << std::endl;
}


