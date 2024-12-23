/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:34:22 by egiubell          #+#    #+#             */
/*   Updated: 2024/08/29 05:53:24 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void): _name("default"), _isSigned(0), _signGrade(10), _execGrade(100) {}

Form::Form(std::string const &name, int const &signGrade, int const &execGrade): _name(name), _isSigned(0), _signGrade(signGrade), _execGrade(execGrade)
{
	if (this->_signGrade < 1)
		throw (Form::GradeTooHighException());
	else if (this->_signGrade > 150)
		throw (Form::GradeTooLowException());
	if (this->_execGrade < 1)
		throw (Form::GradeTooHighException());
	else if (this->_execGrade > 150)
		throw (Form::GradeTooLowException());
}

Form::Form(Form const &copy): _name(copy._name), _isSigned(copy._isSigned), _signGrade(copy._signGrade), _execGrade(copy._execGrade)
{
	*this = copy;
}

Form::~Form(void) {}

Form const	&Form::operator=(const Form &copy)
{
	this->_isSigned = copy._isSigned;
	return (*this);
}

std::string const	&Form::getName(void) const
{
	return (this->_name);
}

int const	&Form::getSignGrade(void) const
{
	return (this->_signGrade);
}

int const	&Form::getExecGrade(void) const
{
	return (this->_execGrade);
}

bool const	&Form::getIsSigned(void) const
{
	return (this->_isSigned);
}

void	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_signGrade)
		throw (Form::GradeTooLowException());
	else
	{
		this->_isSigned = 1;
		std::cout << bureaucrat.getName() << " successfully signed " << this->_name << std::endl;
	}
}

char const	*Form::GradeTooHighException::what(void) const throw()
{
	return ("Form grade is too high");
}

char const	*Form::GradeTooLowException::what(void) const throw()
{
	return ("Form grade is too low");
}

std::ostream	&operator<<(std::ostream &str, Form const &form)
{
	if (form.getIsSigned() == 0)
		return (str << form.getName() << " form, NOT SIGNED" << ", sign grade: " << form.getSignGrade() << ", exec grade: " << form.getExecGrade());
	else if (form.getIsSigned() == 1)
		return (str << form.getName() << " form, SIGNED" << ", sign grade: " << form.getSignGrade() << ", exec grade: " << form.getExecGrade());
	else
		return (str << form.getName() << " ERROR: SIGNED STATUS" << ", sign grade: " << form.getSignGrade() << ", exec grade: " << form.getExecGrade());
}