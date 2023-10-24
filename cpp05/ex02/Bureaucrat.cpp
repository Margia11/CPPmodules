/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:53:37 by andreamargi       #+#    #+#             */
/*   Updated: 2023/09/28 11:33:05 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade) : name(name), grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj) : name(obj.name)
{
	*this = obj;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const &obj)
{
	if (this != &obj)
		this->grade = obj.grade;
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return(this->name);
}


int Bureaucrat::getGrade() const
{
	return(this->grade);
}

void Bureaucrat::decrementGrade()
{
	if (this->grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
}

void Bureaucrat::incrementGrade()
{
	if (this->grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
}

std::ostream&	operator<<(std::ostream &out, Bureaucrat const &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
	return (out);
}

void Bureaucrat::signForm(AForm &obj)
{
	if(obj.getIsSigned())
		std::cout << this->name << " couldn't sign " << obj.getName() << " because it's already signed" << std::endl;
	else if (obj.getGradeToSign() < this->grade)
		std::cout << this->name << " couldn't sign " << obj.getName() << " because it's grade is too low" << std::endl;
	else
	{
		std::cout << this->name << " signed " << obj.getName() << std::endl;
		obj.beSigned(*this);
	}
}

void	Bureaucrat::executeForm(const AForm& form) const
{
	try
	{
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cout << this->name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
	}
}
