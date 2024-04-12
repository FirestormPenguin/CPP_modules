/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:18:30 by egiubell          #+#    #+#             */
/*   Updated: 2024/04/12 12:31:04 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << "FragTrap " << this->_name << " builded." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " terminated." << std::endl;
}

void	FragTrap::highFive(void)
{
	std::cout << "FragTrap " << _name << " giver you an high five." << std::endl;
}
