/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:53:46 by andreamargi       #+#    #+#             */
/*   Updated: 2023/09/28 11:00:16 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private :
		std::string	const name;
		int	grade;
	public :
		Bureaucrat();
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat(Bureaucrat const &obj);
		~Bureaucrat();
		Bureaucrat&	operator=(Bureaucrat const &obj);
		std::string	getName() const;
		int	getGrade() const;
		void	incrementGrade();
		void	decrementGrade();
		void	signForm(AForm &obj);
		void	executeForm(const AForm& form ) const;
		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char* what() const throw() { return ("Grade too high");}
		};
		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char *what() const throw() { return ("Grade too low");}
		};
};

std::ostream&	operator<<(std::ostream &out, Bureaucrat const &obj);

#endif
