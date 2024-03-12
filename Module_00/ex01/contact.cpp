/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 19:22:48 by egiubell          #+#    #+#             */
/*   Updated: 2024/03/12 20:55:23 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::getInput(std::string str) const
{
	std::string	input = "";
	bool		valid = false;
	
	do
	{
		std::cout << str << std::flush;
		std::getline(std::cin, input);
		if (std::cin.good() && !input.empty())
			valid = true;
		else
		{
			std::cin.clear();
			std::cout << "INVALID INPUT, RETRY!" << std::endl;
		}
	} while (!valid);
	return (input);
}

void	Contact::init(void)
{
	std::cin.ignore();
	this->first_name = this->getInput("Enter the first name: ");
	this->last_name = this->getInput("Enter the last name: ");
	this->phone_number = this->getInput("Enter the number: ");
	std::cout << std::endl;
}

std::string	Contact::printLen(std::string str) const
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void	Contact::setIndex(int i)
{
	this-> index = i;
}

void	Contact::view(int index) const
{
	if (this->first_name.empty() || this->last_name.empty() || this->phone_number.empty())
		return ;
	std::cout << "|" << std::setw(10) << index << std::flush;
	std::cout << "|" << std::setw(10) << this->printLen(this->first_name) << std::flush;
	std::cout << "|" << std::setw(10) << this->printLen(this->last_name) << std::flush;
	std::cout << "|" << std::setw(10) << this->printLen(this->phone_number) << std::flush;
	std::cout << "|" << std::endl;
}

void	Contact::display(int index) const
{
	if (this->first_name.empty() || this->last_name.empty() || this->phone_number.empty())
		return ;
	std::cout << std::endl;
	std::cout << "CONTACT #" << index << std::endl;
	std::cout << "First Name:\t" << this->first_name << std::endl;
	std::cout << "Last Name:\t" << this->last_name << std::endl;
	std::cout << "Number:\t" << this->phone_number << std::endl;
	std::cout << std::endl;
}
