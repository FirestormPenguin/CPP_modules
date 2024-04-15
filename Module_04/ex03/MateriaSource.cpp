/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:47:03 by egiubell          #+#    #+#             */
/*   Updated: 2024/04/15 18:53:10 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		materias[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (materias[i])
			delete materias[i];
}

AMateria* MateriaSource::getMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
		if (materias[i] && materias[i]->getType() == type)
			return materias[i];
	return NULL;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
		if (materias[i] == NULL)
		{
			materias[i] = materia;
			return;
		}
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
	for ( int i = 0; i < 4; i++ )
		if ( materias[i] && materias[i]->getType() == type )
			return materias[i]->clone();
	return NULL;
}
