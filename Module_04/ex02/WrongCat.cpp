/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:44:56 by egiubell          #+#    #+#             */
/*   Updated: 2024/04/15 17:57:19 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAAnimal("WrongCat")
{
	std::cout << this->_type << " constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << this->_type << " destructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << "Woof woof" << std::endl;
}
