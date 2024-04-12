/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:27:55 by egiubell          #+#    #+#             */
/*   Updated: 2024/04/08 17:11:48 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " spawned!" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << _name << " eliminated!" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (_energyPoints <= 0)
	{
		std::cout << "Claptrap " << _name << " out of energy!" << std::endl;
		return ;
	}
	std::cout << "Claptrap " << _name << " attacks " << target << " dealing " << _attackDamage << " damage!" << std::endl;
	_energyPoints -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= amount)
	{
		std::cout << "ClapTrap " << _name << " die!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " take " << amount << " damage!" << std::endl;
	_hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints <= 0)
	{
		std::cout << "Claptrap " << _name << " out of energy!" << std::endl;
		return ;
	}
	std::cout << "Claptrap " << _name << " repair for " << amount << " HP!" << std::endl;
	_energyPoints -= 1;
	_hitPoints += amount;
}

unsigned int	ClapTrap::getAttackDamage(void)
{
	return _attackDamage;
}
