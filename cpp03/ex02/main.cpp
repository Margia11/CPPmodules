/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:07:18 by andreamargi       #+#    #+#             */
/*   Updated: 2023/08/21 17:57:45 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap Pikachu("Pikachu");
	FragTrap Charmander("Charmander");
	FragTrap Ditto("Ditto");

	Pikachu.attack("Charmander");
	Pikachu.takeDamage(5);
	Pikachu.beRepaired(3);
	Charmander.attack("Pikachu");
	Charmander.takeDamage(7);
	Charmander.beRepaired(5);
	Ditto.attack("Charmander");
	Ditto.takeDamage(7);
	Ditto.beRepaired(5);
	return (0);
}
