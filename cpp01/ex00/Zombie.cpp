/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 17:12:49 by andreamargi       #+#    #+#             */
/*   Updated: 2023/08/02 14:06:18 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//costruttore la cui prima parte fino a std::string name) indica che stiamo lavorando nella classe Zombie,
//seguito dal nome del costruttore e dai parametri che accetta
//la seconda parte serve a inizializzare i membri della classe
Zombie::Zombie(std::string name) : name(name) {}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

//distruttore
Zombie::~Zombie()
{
	std::cout << name << ": Zombie destroyed" << std::endl;
}
