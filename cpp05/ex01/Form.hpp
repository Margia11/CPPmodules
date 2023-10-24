/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:45:36 by andreamargi       #+#    #+#             */
/*   Updated: 2023/09/21 17:00:38 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private :
		std::string const	name;
		bool				isSigned;
		int const			gradeToSign;
		int const			gradeToExecute;
	public :
		Form();
		Form(std::string const &name, int gradeToSign, int gradeToExecute);
		Form(Form const &obj);
		~Form();
		Form& operator=(Form const &obj);
		std::string getName() const;
		bool		getIsSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExecute() const;
		void		beSigned(Bureaucrat obj);

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

std::ostream&	operator<<(std::ostream &out, Form const &obj);


#endif
