/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:53:29 by andreamargi       #+#    #+#             */
/*   Updated: 2023/09/30 14:29:15 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

int main(void)
{
	Bureaucrat Aldo("Aldo", 1);
	PresidentialPardonForm Giovanni("Giovanni");
	RobotomyRequestForm Giacomo("Giacomo");
	ShrubberyCreationForm Giuseppe("Giuseppe");

	std::cout << Aldo << std::endl;
	std::cout << Giovanni << std::endl;
	std::cout << Giacomo << std::endl;
	std::cout << Giuseppe << std::endl;

	Aldo.signForm(Giovanni);
	Aldo.signForm(Giacomo);
	Aldo.signForm(Giuseppe);

	std::cout << Giovanni << std::endl;
	std::cout << Giacomo << std::endl;
	std::cout << Giuseppe << std::endl;

	Aldo.executeForm(Giovanni);
	Aldo.executeForm(Giacomo);
	Aldo.executeForm(Giuseppe);

	return (0);
}

