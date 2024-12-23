/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:33:30 by egiubell          #+#    #+#             */
/*   Updated: 2024/08/29 06:18:52 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	std::cout << "\nSTART\n";
	std::cout << "\n --- \n\n";

	/*Create form with grade 0, max is 1, so too high*/
	try
	{
		Form form0("9S", 0, 5);
		std::cout << form0 << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
		
	std::cout << "\n --- \n\n";

	/*Create form with grade 151, min is 150, so too low*/
	try
	{
		Form form0("9S", 151, 5);
		std::cout << form0 << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
		
	std::cout << "\n --- \n\n";

	/* Create form and sign it with adequate grade*/
	try
	{
		Bureaucrat mike("Devola", 15);
		Form form("2B", 20, 45);
		std::cout << mike << std::endl;
		std::cout << form << std::endl;
		mike.signForm(form);
		std::cout << form << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "\n --- \n\n";
	
	/* Create form and try to sign it but the grade is not adequate*/
	try
	{
		Bureaucrat jon("Popola", 35);
		Form form2("A2", 20, 45);
		std::cout << jon << std::endl;
		std::cout << form2 << std::endl;
		jon.signForm(form2);
		std::cout << form2 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n --- \n";
	std::cout << "\nEND\n\n";
	return (0);
}