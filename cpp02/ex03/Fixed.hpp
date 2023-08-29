/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 12:37:55 by andreamargi       #+#    #+#             */
/*   Updated: 2023/08/17 15:21:14 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int fixed_point_value; //valore a virgola fissa
		static const int bits = 8; //numero di bit che rappresentano la parte decimale
	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float n);
		Fixed(const Fixed &rhs); //costruttore di copia
		Fixed &operator=(const Fixed &rhs);  //operatore di assegnazione
		~Fixed();

		int getRawBits(void) const; //cestituisce il valore grezzo del valore a virgola fissa.
		void setRawBits(int const raw); //imposta il valore grezzo del numero a virgola fissa.

		int toInt( void ) const; //converte il valore a virgola fissa in un intero
		float toFloat( void ) const; //converte il valore a virgola fissa in un float

		bool operator>(const Fixed &rhs) const;
		bool operator<(const Fixed &rhs) const;
		bool operator>=(const Fixed &rhs) const;
		bool operator<=(const Fixed &rhs) const;
		bool operator==(const Fixed &rhs) const;
		bool operator!=(const Fixed &rhs) const;

		Fixed operator+(const Fixed &rhs) const;
		Fixed operator-(const Fixed &rhs) const;
		Fixed operator*(const Fixed &rhs) const;
		Fixed operator/(const Fixed &rhs) const;

		Fixed &operator++(); //pre-incremento
		Fixed operator++(int); //post-incremento
		Fixed &operator--(); //pre-decremento
		Fixed operator--(int); //post-decremento

		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
};
//permette di stampare il valore a virgola fissa su uno stream di output
std::ostream &operator<<(std::ostream &os, const Fixed &rhs);

#endif

