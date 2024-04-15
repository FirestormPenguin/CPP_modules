/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:40:07 by egiubell          #+#    #+#             */
/*   Updated: 2024/04/15 17:57:19 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define CWRONGAT_HPP

#include "WrongAAnimal.hpp"

class WrongCat : public WrongAAnimal
{
	private:

	public:
		WrongCat(void);
		~WrongCat(void);

		void	makeSound(void) const;
};

#endif
