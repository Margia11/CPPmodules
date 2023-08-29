/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 17:13:04 by andreamargi       #+#    #+#             */
/*   Updated: 2023/08/02 11:24:17 by andreamargi      ###   ########.fr       */
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
		Zombie(std::string name);
		void announce(void);
		~Zombie();
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
