/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:49:29 by egiubell          #+#    #+#             */
/*   Updated: 2024/10/24 17:34:45 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRYCREATIONFORM_HPP
#define SHRUBERRYCREATIONFORM_HPP

#include "Bureaucrat.hpp"

class ShruberryCreationForm : virtual public AForm
{
	private:
		const std::string target;

	public:
		ShruberryCreationForm(const std::string &target);
		~ShruberryCreationForm();
		std::string getTarget(void) const;
		ShruberryCreationForm(const ShruberryCreationForm& copy);
		ShruberryCreationForm& operator=(const ShruberryCreationForm& copy);
		virtual void		execute(const Bureaucrat& executor) const;

};

#endif
