/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:34:22 by egiubell          #+#    #+#             */
/*   Updated: 2024/10/24 17:51:13 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::GradeTooHighException::GradeTooHighException(void)
{
	this->msg = "The grade is higher than the maximum!";
}

AForm::GradeTooHighException::GradeTooHighException(const char *msg) : msg(msg) {}

const char	*AForm::GradeTooHighException::what() const throw()
{
	return (this->msg);
}

AForm::GradeTooLowException::GradeTooLowException(void)
{
	this->msg = "The grade is lower than the minimum!";
}

AForm::GradeTooLowException::GradeTooLowException(const char *msg) : msg(msg) {}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return (this->msg);
}

AForm::AForm() : name(), gradeToSign(1), gradeToExecute(1), _signed(false) {}

AForm::AForm(const std::string& name, int gradeToSign, int gradeToExecute)
	: name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();

	this->_signed = false;
}

AForm::AForm(const AForm &copy) : name(copy.name), gradeToSign(copy.gradeToSign),
gradeToExecute(copy.gradeToExecute), _signed(copy._signed) {}

AForm::~AForm() {}

AForm&	AForm::operator=(const AForm& other)
{
	this->_signed = other._signed;
	return (*this);
}

const std::string&	AForm::getName(void) const
{
	return (this->name);
}

int	AForm::getGradeToSign(void) const
{
	return (this->gradeToSign);
}

int	AForm::getGradeToExecute(void) const
{
	return (this->gradeToExecute);
}

bool	AForm::isSigned(void) const
{
	return (this->_signed);
}

void	AForm::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() > this->gradeToSign)
		throw GradeTooLowException("Bureaucrat is not authorized to sign the form!");
	this->_signed = true;
}

std::ostream&	operator<<(std::ostream& out, AForm& form)
{
	out << "AForm: " << form.getName() << " Signed: " << (form.isSigned() ? "true" : "false");
	out << " GradeToSign: " << form.getGradeToSign();
	out << " GradeToExecute: " << form.getGradeToExecute();

	return (out);
}
