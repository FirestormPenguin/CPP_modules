/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:27:41 by egiubell          #+#    #+#             */
/*   Updated: 2024/04/15 17:57:19 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : AAnimal("Dog")
{
	std::cout << this->_type << " constructor called" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << this->_type << " destructor called" << std::endl;
}

void Dog::makeSound( void ) const
{
	std::cout << "Woof" << std::endl;
}
