/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 19:17:43 by egiubell          #+#    #+#             */
/*   Updated: 2024/03/12 20:34:10 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CPP
#define CONTACT_CPP

#include <iostream>
#include <iomanip>
#include <limits>

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	phone_number;
		int			index;
		
		std::string	getInput(std::string str) const;
		std::string	printLen(std::string str) const;
		
		
	public:
		Contact();
		~Contact();
		void		init(void);
		void		view(int index) const;
		void		display(int index) const;
		void		setIndex(int i);
};

#endif