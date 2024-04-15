/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:40:07 by egiubell          #+#    #+#             */
/*   Updated: 2024/04/15 17:04:19 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGAAnimal_HPP
# define WRONGAAnimal_HPP

#include <iostream>

class WrongAAnimal
{
	protected:
		std::string _type;

	public:
		WrongAAnimal(void);
		WrongAAnimal(std::string type);
		virtual ~WrongAAnimal(void);

		virtual void	makeSound(void) const;
		std::string		getType( void ) const;
};

#endif
