/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 12:18:50 by egiubell          #+#    #+#             */
/*   Updated: 2025/01/17 15:35:29 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>

Intern::Intern() {}

Intern::Intern(const Intern& other)
{
	(void)other;
}

Intern::~Intern() {}

Intern& Intern::operator=(const Intern& other)
{
	(void)other;
	return *this;
}

const char* Intern::FormNotFoundException::what() const throw()
{
	return "Error: The requested form does not exist.";
}

AForm* Intern::createShrubbery(const std::string& target)
{
	return new ShrubberyCreationForm(target);
}

AForm* Intern::createRobotomy(const std::string& target)
{
	return new RobotomyRequestForm(target);
}

AForm* Intern::createPresidential(const std::string& target)
{
	return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(const std::string& formName, const std::string& target) const
{
	struct FormType
	{
		std::string name;
		AForm* (*create)(const std::string&);
	};

	FormType formTypes[] =
	{
		{"shrubbery creation", &Intern::createShrubbery},
		{"robotomy request", &Intern::createRobotomy},
		{"presidential pardon", &Intern::createPresidential}
	};

	for (size_t i = 0; i < sizeof(formTypes) / sizeof(FormType); ++i)
	{
		if (formName == formTypes[i].name)
		{
			std::cout << "Intern creates " << formName << std::endl;
			return formTypes[i].create(target);
		}
	}

	throw FormNotFoundException();
}
