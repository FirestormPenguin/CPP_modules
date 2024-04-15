/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:40:07 by egiubell          #+#    #+#             */
/*   Updated: 2024/04/15 13:46:15 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>

class Cat : public Animal
{
	protected:
		std::string _type;

	public:
		Cat(void);
		~Cat(void);

}

#endif
