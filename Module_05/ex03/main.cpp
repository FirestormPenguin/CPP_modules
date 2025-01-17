/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:33:30 by egiubell          #+#    #+#             */
/*   Updated: 2025/01/17 15:53:11 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

void testInternWithBureaucrat(const std::string& formName, const std::string& target, int bureaucratGrade)
{
	Intern intern;
	Bureaucrat bureaucrat("Test Bureaucrat", bureaucratGrade);

	try {
		std::cout << "\n--- Trying to create and process form: \"" << formName 
				  << "\" with target: \"" << target << "\" by Bureaucrat \"" 
				  << bureaucrat.getName() << "\" (Grade: " << bureaucrat.getGrade() << ") ---" << std::endl;

		AForm* form = intern.makeForm(formName, target);
		std::cout << "Intern creates form \"" << formName << "\" targeting \"" << target << "\"." << std::endl;

		// Bureaucrat attempts to sign the form
		try {
			form->beSigned(bureaucrat);
			std::cout << "Bureaucrat \"" << bureaucrat.getName() << "\" signed the form \"" << formName << "\"." << std::endl;
		} catch (const std::exception& e) {
			std::cerr << "Error: " << e.what() << " (Signing failed)" << std::endl;
		}

		// Bureaucrat attempts to execute the form
		try {
			form->execute(bureaucrat);
			std::cout << "Bureaucrat \"" << bureaucrat.getName() << "\" executed the form \"" << formName << "\"." << std::endl;
		} catch (const std::exception& e) {
			std::cerr << "Error: " << e.what() << " (Execution failed)" << std::endl;
		}

		// Clean up
		delete form;
	} catch (const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
}

int main()
{
	// Test cases with various bureaucrats and form names
	testInternWithBureaucrat("shrubbery creation", "Garden", 1);
	testInternWithBureaucrat("robotomy request", "Bender", 50);
	testInternWithBureaucrat("presidential pardon", "Zoidberg", 25);

	// Test with a bureaucrat who doesn't have enough grade to sign or execute
	testInternWithBureaucrat("presidential pardon", "Zoidberg", 150);

	// Test with an invalid form name
	testInternWithBureaucrat("unknown form", "Target", 1);

	return 0;
}
