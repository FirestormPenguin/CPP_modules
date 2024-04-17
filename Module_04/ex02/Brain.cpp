/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:46:37 by egiubell          #+#    #+#             */
/*   Updated: 2024/04/17 13:37:04 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain created" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain destroyed" << std::endl;
}

Brain::Brain( const Brain& src )
{
	*this = src;
}

Brain& Brain::operator=( const Brain& src )
{
	std::cout << "<Brain.cpp:32> Brain copy called." << std::endl;
	if ( this != &src )
	{
		for ( int i = 0; i < 100; i++ )
		{
			this->_ideas[i] = src._ideas[i];
		}
	}
	return *this;
}
