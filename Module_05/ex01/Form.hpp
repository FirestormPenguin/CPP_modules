/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:34:20 by egiubell          #+#    #+#             */
/*   Updated: 2024/10/23 17:45:42 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class Bureaucrat;

class Form {
	private:
		static const int	maxGrade = 1;
		static const int	minGrade = 150;

		const std::string	name;
		const int			gradeToSign;
		const int			gradeToExecute;
		bool				_signed;

		Form(void);
	public:
		Form(const std::string& name, int gradeToSign, int gradeToExecutre);
		Form(const Form& other);
		~Form(void);

		Form&				operator=(const Form& other);
		const std::string&	getName(void) const;
		int					getGradeToSign(void) const;
		int					getGradeToExecute(void) const;
		bool				isSigned(void) const;
		void				beSigned(const Bureaucrat& b);

	private:
		class GradeTooHighException : public std::exception
		{
			private:
				const char	*msg;
			public:
				GradeTooHighException(void);
				GradeTooHighException(const char *msg);
				const char      *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			private:
				const char	*msg;
			public:
				GradeTooLowException(void);
				GradeTooLowException(const char *msg);
				const char      *what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& out, Form& form);
