/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:35:43 by andreamargi       #+#    #+#             */
/*   Updated: 2023/08/17 11:41:24 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point_value = 0;
}
//inizializza il valore a virgola fissa con il valore intero passato come parametro
Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point_value = n << this->bits;
}
//inizializza il valore a virgola fissa con il valore float passato come parametro
//Moltiplica il valore n per 2^8 (poiché stiamo moltiplicando per 1 << this->bits dove this->bits è 8)
//roundf arrotonda il valore al numero intero più vicino
Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point_value = roundf(n * (1 << this->bits));
}

Fixed::Fixed(const Fixed &rhs)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}

Fixed& Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixed_point_value = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return (this->fixed_point_value);
}

void Fixed::setRawBits(int const raw)
{
	this->fixed_point_value = raw;
}
//converte il valore a virgola fissa in un intero (eliminando la parte decimale)
int Fixed::toInt(void) const
{
	return (this->fixed_point_value >> this->bits);
}
//converte il valore a virgola fissa in un float (mantenendo la parte decimale)
float Fixed::toFloat(void) const
{
	return ((float)this->fixed_point_value / (float)(1 << this->bits));
}
//sovvrascrive l'operatore << per stampare il valore a virgola fissa su uno stream di output
std::ostream& operator<<(std::ostream& os, const Fixed& rhs)
{
	os << rhs.toFloat();
	return (os);
}
