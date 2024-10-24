/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:33:16 by egiubell          #+#    #+#             */
/*   Updated: 2024/10/24 17:53:28 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("default"), _grade(150) {}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat::Bureaucrat(std::string const &name, int grade): _name(name)
{
	this->_grade = grade;
	if (this->_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (this->_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
	*this = copy;
}

Bureaucrat const	&Bureaucrat::operator=(const Bureaucrat &copy)
{
	this->_name = copy._name;
	this->_grade = copy._grade;
	return (*this);
}

std::string const	&Bureaucrat::getName(void) const
{
	return (this->_name);
}

int const	&Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::gradeUp(void)
{
	this->_grade--;
	if (this->_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
}

void	Bureaucrat::gradeDown(void)
{
	this->_grade++;
	if (this->_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

char const	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high");
}

char const	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low");
}

std::ostream	&operator<<(std::ostream &os, Bureaucrat const &b)
{
	return (os << b.getName() << ", bureaucrat grade " << b.getGrade());
}

void	Bureaucrat::signForm(AForm& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << "Bureaucrat " << this->_name << " successfully signed ";
		std::cout << "the form " << form.getName() << "!" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << *this << ". ";
		std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(const AForm &form)
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executes form " << form.getName() << std::endl;
	}
	catch (AForm::InvalidFormException &e)
	{
		std::cout << e.what() << std::endl;
	}
}
