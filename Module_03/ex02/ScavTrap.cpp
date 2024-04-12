/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:32:19 by egiubell          #+#    #+#             */
/*   Updated: 2024/04/12 12:15:57 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout << "ScavTrap " << this->_name << " created!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " destroyed!" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if ( this->_energyPoints <= 0 )
	{
		std::cout << "ScavTrap " << this->_name << " is out of energy." << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->_name << " hit " << target << " with violence, causing " << this->_attackDamage << " damage !" << std::endl;
	this->_energyPoints -= 1;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}
