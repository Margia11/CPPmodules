/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:07:18 by andreamargi       #+#    #+#             */
/*   Updated: 2023/08/23 11:12:41 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap Pikachu("Pikachu");
	DiamondTrap Charmander("Charmander");
	DiamondTrap Ditto("Ditto");

	Pikachu.whoAmI();
	Charmander.whoAmI();
	Ditto.whoAmI();
	Pikachu.attack("Charmander");
	Charmander.takeDamage(5);
	Ditto.beRepaired(3);

	return (0);
}
