/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 19:08:23 by egiubell          #+#    #+#             */
/*   Updated: 2024/03/12 20:26:15 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class Phonebook
{
	private:
		Contact	contacts[8];
		int		readInput(void) const;
		
	public:
		Phonebook();
		~Phonebook();
		void	welcome(void) const;
		void	addContact(void);
		void	printContacts(void) const;
		void	search(void) const;
		
};

#endif