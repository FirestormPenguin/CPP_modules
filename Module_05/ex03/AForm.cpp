/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 06:04:20 by egiubell          #+#    #+#             */
/*   Updated: 2025/01/17 15:03:48 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(void): _name("default"), _isSigned(0), _signGrade(10), _execGrade(100) {}

AForm::AForm(std::string const &name, int const &signGrade, int const &execGrade): _name(name), _isSigned(0), _signGrade(signGrade), _execGrade(execGrade)
{
	if (this->_signGrade < 1)
		throw (AForm::GradeTooHighException());
	else if (this->_signGrade > 150)
		throw (AForm::GradeTooLowException());
	if (this->_execGrade < 1)
		throw (AForm::GradeTooHighException());
	else if (this->_execGrade > 150)
		throw (AForm::GradeTooLowException());
}

AForm::AForm(AForm const &copy): _name(copy._name), _isSigned(copy._isSigned), _signGrade(copy._signGrade), _execGrade(copy._execGrade)
{
	*this = copy;
}

AForm::~AForm(void) {}

AForm const	&AForm::operator=(const AForm &copy)
{
	this->_isSigned = copy._isSigned;
	return (*this);
}

std::string const	&AForm::getName(void) const
{
	return (this->_name);
}

int const	&AForm::getSignGrade(void) const
{
	return (this->_signGrade);
}

int const	&AForm::getExecGrade(void) const
{
	return (this->_execGrade);
}

bool const	&AForm::getIsSigned(void) const
{
	return (this->_isSigned);
}

void	AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_signGrade)
		throw (AForm::GradeTooLowException());
	else
	{
		this->_isSigned = 1;
		std::cout << bureaucrat.getName() << " successfully signed " << this->_name << std::endl;
	}
}

void	AForm::execute(Bureaucrat const &executor) const
{
	if (!this->_isSigned)
		throw (AForm::FormNotSignedException());
	else if (executor.getGrade() > this->_signGrade)
		throw (AForm::GradeTooLowException());
	else
	{
		std::cout << executor.getName() << " executed " << this->_name << std::endl;
		this->beExecuted(executor);
	}
}

char const	*AForm::GradeTooHighException::what(void) const throw()
{
	return ("Form grade is too high");
}

char const	*AForm::GradeTooLowException::what(void) const throw()
{
	return ("Form grade is too low");
}

char const	*AForm::FormNotSignedException::what(void) const throw()
{
	return ("Form not signed");
}

std::ostream	&operator<<(std::ostream &str, AForm const &form)
{
	if (form.getIsSigned() == 0)
		return (str << form.getName() << " form, NOT SIGNED" << ", sign grade: " << form.getSignGrade() << ", exec grade: " << form.getExecGrade());
	else if (form.getIsSigned() == 1)
		return (str << form.getName() << " form, SIGNED" << ", sign grade: " << form.getSignGrade() << ", exec grade: " << form.getExecGrade());
	else
		return (str << form.getName() << " ERROR: SIGNED STATUS" << ", sign grade: " << form.getSignGrade() << ", exec grade: " << form.getExecGrade());
}