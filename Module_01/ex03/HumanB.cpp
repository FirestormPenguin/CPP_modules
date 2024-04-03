/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:54:31 by egiubell          #+#    #+#             */
/*   Updated: 2024/04/03 18:07:16 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	this->_weapon = NULL;
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}

void HumanB::attack( void ) const
{
	if (this->_weapon != NULL && this->_weapon->getType() != "")
	{
		std::cout << _name << " attacks with their " << this->_weapon->getType() << std::endl;
	}
	else
	{
		std::cout << _name << " doesn't have a weapon to attack." << std::endl;
	}
}
