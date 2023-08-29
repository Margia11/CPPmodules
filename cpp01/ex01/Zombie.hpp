/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:29:28 by andreamargi       #+#    #+#             */
/*   Updated: 2023/08/02 14:10:23 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Zombie {

private:
	std::string name;

public:
		Zombie();
		void	announce(void);
		void	setName(std::string name);
		~Zombie();
};

Zombie*	zombieHorde(int N, std::string name);

#endif
