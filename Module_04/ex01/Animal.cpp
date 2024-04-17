/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:40:09 by egiubell          #+#    #+#             */
/*   Updated: 2024/04/17 13:36:04 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Animal")
{
	std::cout << this->_type << " constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal " << this->_type << " constructor called" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal& ptr)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = ptr;
}

Animal& Animal::operator=(const Animal& rhs)
{
	std::cout << "Animal assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return *this;
}

void Animal::makeSound(void) const
{
	std::cout << "Animal makeSound called" << std::endl;
}

std::string Animal::getType(void) const
{
	return this->_type;
}
