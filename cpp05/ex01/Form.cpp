/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:45:29 by andreamargi       #+#    #+#             */
/*   Updated: 2023/09/21 17:54:35 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string const& name, int const gradeToSign, int const gradeToExecute) : name(name), isSigned(), gradeToSign(gradeToSign), gradeToExecute(0)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const& obj) : name(obj.name), isSigned(obj.isSigned), gradeToSign(obj.gradeToSign), gradeToExecute(obj.gradeToExecute)
{
	*this = obj;
}

Form::~Form()
{
}

Form&	Form::operator=(Form const& obj)
{
	if (this != &obj)
		this->isSigned = obj.isSigned;
	return (*this);
}

std::string Form::getName() const
{
	return (this->name);
}

bool	Form::getIsSigned() const
{
	return (this->isSigned);
}

int		Form::getGradeToSign() const
{
	return (this->gradeToSign);
}

int		Form::getGradeToExecute() const
{
	return (this->gradeToExecute);
}

void	Form::beSigned(Bureaucrat obj)
{
	if (obj.getGrade() >= this->gradeToSign)
		throw Form::GradeTooLowException();
	this->isSigned = true;
}

std::ostream&	operator<<(std::ostream& out, Form const& obj)
{
	out << obj.getName() << ", form grade " << obj.getGradeToSign() << ", signed: " << obj.getIsSigned();
	return (out);
}
