/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:27:41 by egiubell          #+#    #+#             */
/*   Updated: 2024/04/15 17:07:01 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << this->_type << " constructor called" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << this->_type << " destructor called" << std::endl;
}

void Cat::makeSound( void ) const
{
	std::cout << "Meow" << std::endl;
}
