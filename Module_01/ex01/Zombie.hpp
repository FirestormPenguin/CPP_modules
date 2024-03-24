/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 23:35:38 by egiubell          #+#    #+#             */
/*   Updated: 2024/03/24 13:55:43 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CPP
#define ZOMBIE_CPP

#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
#include <vector>

class Zombie
{
	private:
	
		std::string	name;
		
	public:
	
		Zombie();
		~Zombie();
		std::string	getName(void);
		void		announce(void);
		Zombie		*newZombie(std::string name);
		void		randomChump(std::string name);
		Zombie		*zombieHorde(int N, std::string name);
		void		setName(std::string name);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);
Zombie	*zombieHorde(int N, std::string name);

#endif