/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:09:08 by egiubell          #+#    #+#             */
/*   Updated: 2024/04/15 18:52:38 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>

class ICharacter;

class AMateria
{
	protected:
		std::string const _type;

	public:
		AMateria();
		AMateria(std::string const &type);
		virtual ~AMateria();

		std::string const &getType() const; //Return the type

		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif
