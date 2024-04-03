/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 18:55:14 by egiubell          #+#    #+#             */
/*   Updated: 2024/04/03 19:07:45 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void )
{
	std::string	input;
	Harl		harl;

	do
	{
		std::cout << "Enter a level (DEBUG, INFO, WARNING, ERROR): ";
		std::cin >> input;
		harl.complain(input);
	} while (input.compare("exit"));
	
	return EXIT_SUCCESS;
}