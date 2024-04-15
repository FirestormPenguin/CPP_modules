/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:40:07 by egiubell          #+#    #+#             */
/*   Updated: 2024/04/15 17:44:54 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
# define AAnimal_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
	protected:
		std::string _type;

	public:
		AAnimal(void);
		AAnimal(std::string type);
		virtual ~AAnimal(void);

		virtual void	makeSound(void) const = 0; /*Metodo virtuale puro*/
		std::string getType( void ) const;
};

#endif

/*Un metodo virtuale puro è un metodo che non ha un'implementazione nella
classe base e deve essere implementato nelle classi derivate

In questo contesto, "puro" si riferisce al fatto che un metodo virtuale puro
non ha un'implementazione nella classe base, ma deve essere implementato nelle
classi derivate.
Il termine "puro" qui suggerisce che il metodo è essenzialmente "senza contaminazioni"
dalla classe base, poiché la classe base non fornisce alcuna implementazione concreta
per quel metodo.*/
