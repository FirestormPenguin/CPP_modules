/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:27:41 by egiubell          #+#    #+#             */
/*   Updated: 2024/04/17 14:20:30 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << this->_type << " constructor called" << std::endl;
	try
	{
		this->_brain = new Brain();
	}
	catch (const std::bad_alloc& e)
	{
		std::cout << "Memory Allocation is failed : " << e.what() << std::endl;
	}
}

Dog::~Dog(void)
{
	std::cout << this->_type << " destructor called" << std::endl;
	delete  this->_brain;
}

void Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src)
{
	*this = src;
}

Dog& Dog::operator=(const Dog& src)
{
	std::cout << "Dog copy called." << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
		this->_brain = new Brain( *src._brain );
	}
	return *this;
}
