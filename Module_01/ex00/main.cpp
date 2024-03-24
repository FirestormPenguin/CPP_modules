/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 00:20:04 by egiubell          #+#    #+#             */
/*   Updated: 2024/03/24 02:19:06 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	welcome (void)
{	
	std::cout << "Zombie management system 1.0" << std::endl;
	std::cout << std::endl;
	std::cout << "Commands:" << std::endl;
	std::cout << "add:	add a zombie" << std::endl;
	std::cout << "add+:	add an energic zombie" << std::endl;
	std::cout << "call:	make all zombie alive announce themself" << std::endl;
	std::cout << "kill:	kill a zombie" << std::endl;
	std::cout << "exit:	kill all the zombie and terminate the management" << std::endl;
	std::cout << std::endl;
}

int main ()
{
	std::vector<Zombie*> zombies;
	std::string input;
	Zombie *tmpZombie;
	
	welcome();
	while (true)
	{
		std::cout << "Insert command: ";
		std::getline(std::cin, input);
		std::cout << std::endl;

		if (input == "add")
		{
			std::cout << "Insert name: ";
			std::getline(std::cin, input);
			std::cout << std::endl;
			tmpZombie = newZombie(input);
			zombies.push_back(tmpZombie);
		}
		else if (input == "add+")
		{
			std::cout << "Insert name: ";
			std::getline(std::cin, input);
			std::cout << std::endl;
			randomChump(input);
			std::cout << std::endl;
		}
		else if (input == "call")
		{
			for (std::vector<Zombie*>::iterator it = zombies.begin(); it != zombies.end(); ++it)
			{
				(*it)->announce();
			}
			std::cout << std::endl;
		}
		else if (input == "kill")
		{
			std::cout << "Who do you want to kill: ";
			std::getline(std::cin, input);
			std::cout << std::endl;
			for (std::vector<Zombie*>::iterator it = zombies.begin(); it != zombies.end(); ++it)
			{
				if ((*it)->getName() == input)
				{
					delete *it;
					zombies.erase(it);
					break;
				}
			}
			std::cout << std::endl;
		}
		else if (input == "exit")
			break;
		else
		{
			std::cout << "command not valid..." << std::endl;
			std::cout << std::endl;
		}
	}
	for (std::vector<Zombie*>::iterator it = zombies.begin(); it != zombies.end(); ++it)
	{
		delete *it;
	}
	std::cout << std::endl;
	std::cout << "Thanks for trying our zombie management system!" << std::endl;
	return 0;
}
