/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 11:56:39 by egiubell          #+#    #+#             */
/*   Updated: 2024/03/24 13:54:53 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie *tmpZombie = new Zombie[N];
	
	for (int i = 0; i < N; i++)
	{
		tmpZombie[i].setName(name);
	}
	return tmpZombie;
}