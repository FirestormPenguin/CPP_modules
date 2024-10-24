/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:49:18 by egiubell          #+#    #+#             */
/*   Updated: 2024/10/24 17:31:48 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidetialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm("PresidentialForm", 25, 5), target(target)
{
	std::cout<<"PresidentialPardonForm created"<<std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout<<"PresidentialPardonForm destroyed"<<std::endl;
}

std::string PresidentialPardonForm::getTarget(void) const
{
	return this->target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm(copy), target(copy.getTarget())
{
	std::cout<<"PresidentialPardonForm copy called"<<std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy)
{
	this->target = copy.getTarget();
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	this->checkExecutability(executor);
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
