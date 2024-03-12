/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 19:23:01 by egiubell          #+#    #+#             */
/*   Updated: 2024/03/12 20:50:53 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook()
{
}

Phonebook::~Phonebook()
{
}

void	Phonebook::welcome(void) const
{
	std::cout << std::endl;
	std::cout << "PhoneBook 1.0" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Commands:" << std::endl;
	std::cout << std::endl;
	std::cout << "ADD\t: To add a contact." << std::endl;
	std::cout << "SEARCH\t: To search for a contact." << std::endl;
	std::cout << "EXIT\t: to quit the PhoneBook." << std::endl;
	std::cout << std::endl;
}

int	Phonebook::readInput() const
{
	int		input = -1;
	bool	valid = false;
	do
	{
		std::cout << "Please enter the contact index: " << std::flush;
		std::cin >> input;
		if (std::cin.good() && (input >= 0 && input <= 8))
			valid = true;
		else
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			std::cout << "INVALID INDEX, RETRY!" << std::endl;
		}
	} while (!valid);
	return (input);
}

void	Phonebook::addContact(void)
{
	static int  i;
	this->contacts[i % 8].init();
	this->contacts[i % 8].setIndex(i % 8);
	i++;
}

void	Phonebook::search(void) const
{
	int i = this->readInput();
	this->contacts[i].display(i);
}

void	Phonebook::printContacts(void) const
{
	std::cout << "PHONBOOK CONTACTS" << std::endl;
	for (size_t i = 0; i < 8; i++)
	{
		this->contacts[i].view(i);
	}
	std::cout << std::endl;
}
