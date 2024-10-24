/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:49:20 by egiubell          #+#    #+#             */
/*   Updated: 2024/10/24 17:57:43 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"
class AForm;

class PresidentialPardonForm : virtual public AForm
{
	private:
		const std::string target;

	public:
		PresidentialPardonForm(const std::string &target);
		~PresidentialPardonForm();
		std::string getTarget(void) const;
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		PresidentialPardonForm& operator=(const PresidentialPardonForm &copy);

		void execute(const Bureaucrat &executor) const;
};

#endif
