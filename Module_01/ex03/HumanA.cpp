/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:55:12 by egiubell          #+#    #+#             */
/*   Updated: 2024/04/03 18:07:04 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack(void) const
{
	if (this->_weapon.getType() != "")
	{
		std::cout << _name << " attacks with their " << this->_weapon.getType() << std::endl;
	}
	else
	{
		std::cout << _name << " doesn't have a weapon to attack." << std::endl;
	}
}
