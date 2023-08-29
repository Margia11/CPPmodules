/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:04:11 by andreamargi       #+#    #+#             */
/*   Updated: 2023/08/14 10:35:38 by andreamargi      ###   ########.fr       */
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
		Fixed(const Fixed &rhs); //costruttore di copia
		Fixed& operator=(const Fixed &rhs); //operatore di assegnazione
		~Fixed();
		int getRawBits(void) const; //cestituisce il valore grezzo del valore a virgola fissa.
		void setRawBits(int const raw); //imposta il valore grezzo del numero a virgola fissa.
};

#endif
