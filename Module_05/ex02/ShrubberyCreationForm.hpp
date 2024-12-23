/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 06:03:24 by egiubell          #+#    #+#             */
/*   Updated: 2024/08/29 06:25:02 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <fstream>
#include "AForm.hpp"

#define TREE "       &&& &&  & &&\n    && &  |& ()|  @, &&\n    (  &||&   _) &_&\n &()  |()|   %& ()&\n_  &&_ |& |&& __%_ _& &&\n&&   && & &| &|  & & % ()&  &&\n   ()_---()& |&&-&&--%---()~\n              |||\n              |||\n              |||\n              |||\n              |||\n"

class Bureaucrat;

class ShrubberyCreationForm: public AForm
{
	private:
		std::string	_target;
		
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(ShrubberyCreationForm const &copy);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm const	&operator=(ShrubberyCreationForm const &copy);

		void	beExecuted(Bureaucrat const &bureaucrat) const;
};

std::ostream	&operator<<(std::ostream &str, ShrubberyCreationForm const &form);