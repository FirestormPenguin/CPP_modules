/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:34:20 by egiubell          #+#    #+#             */
/*   Updated: 2024/10/24 17:56:12 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		static const int	maxGrade = 1;
		static const int	minGrade = 150;

		const std::string	name;
		const int			gradeToSign;
		const int			gradeToExecute;
		bool				_signed;

	public:
		AForm(void);
		AForm(const std::string& name, int gradeToSign, int gradeToExecutre);
		AForm(const AForm& other);
		~AForm(void);

		AForm&				operator=(const AForm& other);
		const std::string&	getName(void) const;
		int					getGradeToSign(void) const;
		int					getGradeToExecute(void) const;
		bool				isSigned(void) const;
		void				beSigned(const Bureaucrat& b);
		virtual void		execute(const Bureaucrat& executor) const = 0;

		class GradeTooHighException : public std::exception
		{
			private:
				const char  *msg;
			public:
				GradeTooHighException(void);
				GradeTooHighException(const char *msg);
				const char      *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			private:
				const char  *msg;
			public:
				GradeTooLowException(void);
				GradeTooLowException(const char *msg);
				const char      *what() const throw();
		};
		class InvalidFormException : public std::exception
		{
			private:
				const char	*msg;
			public:
				InvalidFormException(void);
				InvalidFormException(const char *msg);
				const char* what() const throw();
		};
};

std::ostream&   operator<<(std::ostream& out, AForm& form);

#endif
