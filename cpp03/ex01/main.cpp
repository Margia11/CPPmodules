/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:07:18 by andreamargi       #+#    #+#             */
/*   Updated: 2023/08/21 17:56:48 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap Pikachu("Pikachu");
	ScavTrap Charmander("Charmander");
	ScavTrap Ditto("Ditto");


	Pikachu.attack("Charmander");
	Pikachu.takeDamage(5);
	Pikachu.beRepaired(3);
	Charmander.attack("Pikachu");
	Charmander.takeDamage(7);
	Charmander.beRepaired(5);
	Ditto.guardGate();
	Ditto.attack("Charmander");
	Ditto.takeDamage(7);
	Ditto.beRepaired(5);
	return (0);
}
