/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 12:38:01 by andreamargi       #+#    #+#             */
/*   Updated: 2023/08/17 14:32:49 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fixed_point_value = 0;
}

Fixed::Fixed(const int n)
{
	this->fixed_point_value = n << this->bits;
}

Fixed::Fixed(const float n)
{
	this->fixed_point_value = roundf(n * (1 << this->bits));
}

Fixed::Fixed(const Fixed &rhs)
{
	*this = rhs;
}

Fixed& Fixed::operator=(const Fixed &rhs)
{
	this->fixed_point_value = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits(void) const
{
	return (this->fixed_point_value);
}

void Fixed::setRawBits(int const raw)
{
	this->fixed_point_value = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->fixed_point_value / (float)(1 << this->bits));
}

int Fixed::toInt(void) const
{
	return (this->fixed_point_value >> this->bits);
}

std::ostream& operator<<(std::ostream &out, const Fixed &rhs)
{
	out << rhs.toFloat();
	return (out);
}

//comparison operators
//confronta i due operandi e restituisce true o false
bool Fixed::operator>(const Fixed &rhs) const
{
	return (this->fixed_point_value > rhs.getRawBits());
}

bool Fixed::operator<(const Fixed &rhs) const
{
	return (this->fixed_point_value < rhs.getRawBits());
}

bool Fixed::operator>=(const Fixed &rhs) const
{
	return (this->fixed_point_value >= rhs.getRawBits());
}

bool Fixed::operator<=(const Fixed &rhs) const
{
	return (this->fixed_point_value <= rhs.getRawBits());
}

bool Fixed::operator==(const Fixed &rhs) const
{
	return (this->fixed_point_value == rhs.getRawBits());
}

bool Fixed::operator!=(const Fixed &rhs) const
{
	return (this->fixed_point_value != rhs.getRawBits());
}

//arithmetic operators
//coverte i due operandi in float, esegue l'operazione e restituisce un nuovo oggetto Fixed
Fixed Fixed::operator+(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

//increment and decrement operators
//incrementa o decrementa il valore dell'oggetto e restituisce un riferimento allo stesso
Fixed& Fixed::operator++(void)
{
	this->fixed_point_value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed& Fixed::operator--(void)
{
	this->fixed_point_value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return (tmp);
}

//min and max functions
//restituiscono il minimo o il massimo tra due oggetti Fixed
Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}
