/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:49:23 by egiubell          #+#    #+#             */
/*   Updated: 2024/10/24 17:28:02 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("RobotomyForm", 72, 45), target(target)
{
	std::cout<<"RobotomyRequest created"<<std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout<<"RobotomyRequest destroyed"<<std::endl;
}

std::string RobotomyRequestForm::getTarget(void) const
{
	return this->target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm(copy), target(copy.getTarget())
{
	std::cout<<"RobotomyRequest copy called"<<std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy)
{
	this->target = copy.target;
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	this->checkExecutability(executor);
	srand(time(NULL));

	std::cout << "* Drilling noises *" << std::endl;
	if (rand() % 2)
		std::cout << this->target << " has been successfully robotomized!" << std::endl;
	else
		std::cout << "The robotomy on " << this->target << " failed!" << std::endl;
}
