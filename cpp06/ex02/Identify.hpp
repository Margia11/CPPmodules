/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:57:36 by andreamargi       #+#    #+#             */
/*   Updated: 2023/10/15 15:43:12 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFY_HPP
#define IDENTIFY_HPP

# include <iostream>
# include <string>
# include <cfloat>
# include <limits>
# include <cstdint>

class Base
{
	public:
		virtual ~Base() {};
};
Base *generate(void);
void identify(Base *p);
void identify(Base &p);

class A : public Base {};

class B : public Base {};

class C : public Base {};

#endif
