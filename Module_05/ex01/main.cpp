/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:33:30 by egiubell          #+#    #+#             */
/*   Updated: 2024/10/24 14:54:43 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << "Let's create a form with grade to sign 0" << std::endl;
	try
	{
		Form	f("EB110", 0, 1);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "\nLet's create a form with grade to execute 0" << std::endl;
	try
	{
		Form	f("EB111", 1, 0);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "\nLet's create a form with grade to execute 151" << std::endl;
	try
	{
		Form	f("EB112", 1, 151);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "\nLet's create a form with grade to sign 151" << std::endl;
	try
	{
		Form	f("EB113", 151, 1);
	}
	catch (std::exception &e)
	{
		std::cout << "Exeption: " << e.what() << std::endl;
	}

	std::cout << "\nLet's sign a form with appropriate bureaucrat\n" << std::endl;
	try
	{
		Bureaucrat	Odin("Odin", 1);
		Form		f("EB114", 150, 150);

		std::cout << f << std::endl;
		Odin.signForm(f);
		std::cout << f << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;


	std::cout << "\nLet's sign a form with inappropriate bureaucrat\n" << std::endl;
	try
	{
		Bureaucrat	Thor("Thor", 10);
		Form		f("EB115", 1, 1);

		std::cout << f << std::endl;
		Thor.signForm(f);
		std::cout << f << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
