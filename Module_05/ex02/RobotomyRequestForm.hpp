/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:49:25 by egiubell          #+#    #+#             */
/*   Updated: 2024/10/24 17:28:25 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"

class RobotomyRequestForm :  virtual public AForm
{
	private:
		const std::string target;

	public:
		RobotomyRequestForm(const std::string &target);
		~RobotomyRequestForm();
		std::string getTarget(void) const;
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		RobotomyRequestForm& operator=(const RobotomyRequestForm &copy);

		void		execute( const Bureaucrat& executor) const;
};

#endif
