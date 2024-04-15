/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:18:54 by egiubell          #+#    #+#             */
/*   Updated: 2024/04/15 18:20:53 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("")
{
}

AMateria::AMateria( std::string const & type )  : _type(type)
{
	std::cout << "AMateria " << this->_type << " created" << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria " << this->_type << " destroyed" << std::endl;
}

std::string const & AMateria::getType() const
{
	return this->_type;
}

AMateria* AMateria::clone() const
{
	return (AMateria*)this;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria " << this->_type << " used on " << target.getName() << std::endl;
}
