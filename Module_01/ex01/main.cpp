/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 00:20:04 by egiubell          #+#    #+#             */
/*   Updated: 2024/03/24 14:01:04 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	size_t N = 4;
	std::string	name = "jack";

	Zombie *zombiz = zombieHorde(N, name);

	for (size_t i = 0; i < N; i++)
	{
		zombiz[i].announce();
	}

	delete [] zombiz;
	return 0;
}
