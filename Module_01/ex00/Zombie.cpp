/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 23:41:46 by egiubell          #+#    #+#             */
/*   Updated: 2024/03/24 01:52:15 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << this->name << ": destroyed!" << std::endl;
}

std::string	Zombie::getName()
{
	return (name);
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie	*newZombie(std::string name)
{
	Zombie *newZombie = new Zombie(name);
	return newZombie;
}

void	randomChump(std::string name)
{
	Zombie *randomZombie = newZombie(name);
	randomZombie->announce();
	delete randomZombie;
}
