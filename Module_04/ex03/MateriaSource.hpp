/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MaterialSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:46:11 by egiubell          #+#    #+#             */
/*   Updated: 2024/04/15 18:47:50 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	materias[4];

	public:
		MateriaSource();
		~MateriaSource();

		AMateria*	getMateria(std::string const & type);
		AMateria*	createMateria(std::string const & type);
		void		learnMateria(AMateria*);
};


#endif
