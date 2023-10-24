/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:45:29 by andreamargi       #+#    #+#             */
/*   Updated: 2023/09/28 18:02:14 by andreamargi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string const& name, int const gradeToSign, int const gradeToExecute) : name(name), isSigned(), gradeToSign(gradeToSign), gradeToExecute(0)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const& obj) : name(obj.name), isSigned(obj.isSigned), gradeToSign(obj.gradeToSign), gradeToExecute(obj.gradeToExecute)
{
	*this = obj;
}

AForm::~AForm()
{
}

AForm&	AForm::operator=(AForm const& obj)
{
	if (this != &obj)
		this->isSigned = obj.isSigned;
	return (*this);
}

std::string AForm::getName() const
{
	return (this->name);
}

bool	AForm::getIsSigned() const
{
	return (this->isSigned);
}

int		AForm::getGradeToSign() const
{
	return (this->gradeToSign);
}

int		AForm::getGradeToExecute() const
{
	return (this->gradeToExecute);
}

void	AForm::beSigned(Bureaucrat obj)
{
	if (obj.getGrade() >= this->gradeToSign)
		throw AForm::GradeTooLowException();
	this->isSigned = true;
}

std::ostream&	operator<<(std::ostream& out, AForm const& obj)
{
	out << obj.getName() << ", form grade " << obj.getGradeToSign() << ", signed: " << obj.getIsSigned();
	return (out);
}

