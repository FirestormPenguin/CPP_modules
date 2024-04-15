/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:40:09 by egiubell          #+#    #+#             */
/*   Updated: 2024/04/15 17:12:45 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAAnimal.hpp"

WrongAAnimal::WrongAAnimal( void ) : _type("WrongAAnimal")
{
	std::cout << this->_type << " constructor called" << std::endl;
}

WrongAAnimal::WrongAAnimal( std::string type ) : _type(type)
{
	std::cout << "WrongAAnimal " << this->_type << " constructor called" << std::endl;
}

WrongAAnimal::~WrongAAnimal(void)
{
	std::cout << "WrongAAnimal destructor called" << std::endl;
}

void WrongAAnimal::makeSound( void ) const
{
	std::cout << "WrongAAnimal makeSound called" << std::endl;
}

std::string WrongAAnimal::getType( void ) const
{
	return this->_type;
}
