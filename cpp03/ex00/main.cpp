/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 11:28:58 by andreamargi       #+#    #+#             */
/*   Updated: 2023/08/21 14:01:31 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Pikachu("Pikachu");
	ClapTrap Charmander("Charmander");

	Pikachu.attack("Charmander");
	Pikachu.takeDamage(5);
	Pikachu.beRepaired(3);
	Charmander.attack("Pikachu");
	Charmander.takeDamage(7);
	Charmander.beRepaired(5);
	return (0);
}
