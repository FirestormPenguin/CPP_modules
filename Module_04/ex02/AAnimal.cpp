/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:40:09 by egiubell          #+#    #+#             */
/*   Updated: 2024/04/15 17:05:31 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("AAnimal")
{
	std::cout << this->_type << " constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << "AAnimal " << this->_type << " constructor called" << std::endl;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal destructor called" << std::endl;
}

/*Commentata perche anche se non esistente funziona comunque in quanto makeSound
e' un metodo virtuale puro*/
// void AAnimal::makeSound(void) const
// {
// 	std::cout << "AAnimal makeSound called" << std::endl;
// }

std::string AAnimal::getType(void) const
{
	return this->_type;
}
