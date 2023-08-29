/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 16:19:27 by andreamargi       #+#    #+#             */
/*   Updated: 2023/07/07 15:41:38 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->index = 0;
	return;
}

PhoneBook::~PhoneBook()
{
	return;
}

void PhoneBook::addContact()
{
	std::string firstName, lastName, nickname, phoneNumber, darkestSecret;
	Contact newContact;

	if (this->index >= 8)
	{
		std::cout << "Enter first name: ";
		std::cin >> firstName;
		newContact.setFirstName(firstName);

		std::cout << "Enter last name: ";
		std::cin >> lastName;
		newContact.setLastName(lastName);

		std::cout << "Enter nickname: ";
		std::cin >> nickname;
		newContact.setNickname(nickname);

		std::cout << "Enter phone number: ";
		std::cin >> phoneNumber;

		std::cout << "Enter darkest secret: ";
		std::cin.ignore(); // Ignora il carattere di ritorno a capo nel buffer di input
		std::getline(std::cin, darkestSecret);

		newContact.setPhoneNumber(phoneNumber);
		newContact.setDarkestSecret(darkestSecret);

		// Sposta tutti i contatti indietro nell'array
		for (int i = 1; i < this->index; i++)
		{
			this->contacts[i - 1] = this->contacts[i];
		}

		this->contacts[this->index - 1] = newContact;
		std::cout << "PhoneBook is full. The oldest contact has been replaced." << std::endl;
	}
	else
	{
		std::cout << "Enter first name: ";
		std::cin >> firstName;
		newContact.setFirstName(firstName);

		std::cout << "Enter last name: ";
		std::cin >> lastName;
		newContact.setLastName(lastName);

		std::cout << "Enter nickname: ";
		std::cin >> nickname;
		newContact.setNickname(nickname);

		std::cout << "Enter phone number: ";
		std::cin >> phoneNumber;

		std::cout << "Enter darkest secret: ";
		std::cin.ignore(); // Ignora il carattere di ritorno a capo nel buffer di input
		std::getline(std::cin, darkestSecret);

		newContact.setPhoneNumber(phoneNumber);
		newContact.setDarkestSecret(darkestSecret);

		this->contacts[this->index] = newContact;
		std::cout << "New contact added." << std::endl;
		this->index++;
	}
}

void PhoneBook::searchContact()
{
	int contactIndex;

	if (this->index == 0)
	{
		std::cout << "No contacts found. Please add contacts first." << std::endl;
		return;
	}
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|   Index  |First Name|Last Name | Nickname |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;

	for (int i = 0; i < this->index; i++)
	{
		std::string firstName = this->contacts[i].getFirstName();
		std::string lastName = this->contacts[i].getLastName();
		std::string nickname = this->contacts[i].getNickname();
		// Tronca i campi se sono più lunghi di 10 caratteri
		if (firstName.length() > 10)
			firstName = firstName.substr(0, 9) + ".";
		if (lastName.length() > 10)
			lastName = lastName.substr(0, 9) + ".";
		if (nickname.length() > 10)
			nickname = nickname.substr(0, 9) + ".";

		std::cout << "|" << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << std::right << firstName << "|";
		std::cout << std::setw(10) << std::right << lastName << "|";
		std::cout << std::setw(10) << std::right << nickname << "|" << std::endl;
	}
	std::cout << "-------------------------------------------" << std::endl;
	while (true)
	{
		std::cout << "Enter the index of the contact to display: ";
		std::cin >> contactIndex;
		if (std::cin.fail())
		{
			std::cout << "Invalid input. Please enter a valid index." << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}
		if (contactIndex < 1 || contactIndex > this->index)
		{
			std::cout << "Invalid index. Please try again." << std::endl;
			return;
		}
		break;
	}
	Contact selectedContact = this->contacts[contactIndex - 1];

	std::cout << "Contact Information:" << std::endl;
	std::cout << "First Name: " << selectedContact.getFirstName() << std::endl;
	std::cout << "Last Name: " << selectedContact.getLastName() << std::endl;
	std::cout << "Nickname: " << selectedContact.getNickname() << std::endl;
	std::cout << "Phone Number: " << selectedContact.getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << selectedContact.getDarkestSecret() << std::endl;
	}
