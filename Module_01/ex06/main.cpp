/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 18:55:14 by egiubell          #+#    #+#             */
/*   Updated: 2024/04/03 19:11:00 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( int ac, char **av )
{

	if (ac != 2) {
		return (std::cout << "Usage: ./harlFilter \"level\"\n", EXIT_FAILURE);
	}
	std::string	input = av[1];
	Harl		harl;

	harl.complain(input);

	return EXIT_SUCCESS;
}