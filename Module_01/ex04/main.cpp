/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 18:11:22 by egiubell          #+#    #+#             */
/*   Updated: 2024/04/03 18:43:13 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Usage: ./Sed <filename> <to_find> <replace>." << std::endl;
		return EXIT_FAILURE;
	}
	else
	{
		Sed	sed(av[1]);
		sed.replace (av[2], av[3]);
	}
	return EXIT_SUCCESS;
}
