/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:26:53 by andreamargi       #+#    #+#             */
/*   Updated: 2023/08/02 14:08:09 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int N = 10;
	Zombie* horde = zombieHorde(N, "ZombieHorde");

	for(int i = 0; i < N; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}
