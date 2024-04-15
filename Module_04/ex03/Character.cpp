/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:40:50 by egiubell          #+#    #+#             */
/*   Updated: 2024/04/15 19:13:49 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : _name(name)
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
	std::cout << "Character " << this->_name << " created" << std::endl;
}

Character::~Character()
{
	std::cout << "Character " << this->_name << " destroyed" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
}

void Character::equip(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = materia;
			std::cout << "Character " << this->_name << " equipped with " << materia->getType() << std::endl;
			return;
		}
		std::cout << "Character " << this->_name << " can't equip " << materia->getType() << std::endl;
	}
}

void Character::unequip(int i)
{
	if (this->_inventory[i])
	{
		delete this->_inventory[i];
		this->_inventory[i] = NULL;
		std::cout << "Character " << this->_name << " unequipped" << std::endl;
	}
	else
		std::cout << "Character " << this->_name << " can't unequip" << std::endl;
}

void Character::use(int i, ICharacter& target)
{
	if (this->_inventory[i])
	{
		this->_inventory[i]->use(target);
		std::cout << "Character " << this->_name << " uses " << this->_inventory[i]->getType() << std::endl;
	}
	else
		std::cout << "Character " << this->_name << " can't use" << std::endl;
}

std::string const& Character::getName() const
{
	return this->_name;
}
