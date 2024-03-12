/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 19:27:51 by egiubell          #+#    #+#             */
/*   Updated: 2024/03/12 20:50:11 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main (void)
{
	Phonebook book;
	std::string input = "";

	book.welcome();
	while (1)
	{
		std::cout << "> " << std::flush;
		std::cin >> input;
		if (input.compare("EXIT") == 0)
			break ;
		else if (input.compare("ADD") == 0)
			book.addContact();
		else if (input.compare("SEARCH") == 0)
		{
			book.printContacts();
			book.search();
		}
		else
		{
			std::cout << "INVALID COMMAND!" << std::endl;
			std::cout << std::endl;
		}
	}
	return (0);
}
