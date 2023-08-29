/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:19:46 by andreamargi       #+#    #+#             */
/*   Updated: 2023/08/28 18:26:23 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

int main()
{
	const Animal* j = new Dog(); const Animal* i = new Cat();
	delete j;
	delete i;

	const Animal* a[6] = {new Dog(), new Cat(), new Dog(), new Cat(), new Dog(), new Cat()};
	for (int i = 0; i < 6; i++)
		delete a[i];
	return 0;
}
