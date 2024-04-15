/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:40:07 by egiubell          #+#    #+#             */
/*   Updated: 2024/04/15 13:46:18 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>

class Dog : public Animal
{
	protected:
		std::string _type;

	public:
		Dog(void);
		~Dog(void);

}

#endif
