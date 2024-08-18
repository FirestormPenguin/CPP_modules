/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:33:30 by egiubell          #+#    #+#             */
/*   Updated: 2024/08/18 18:35:25 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	std::cout << "\nSTART\n";
	std::cout << "\n --- \n\n";
	/*Grade iniatialized too high*/
	try
	{
		Bureaucrat A("A", 0);
		std::cout << A << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n --- \n\n";
	/*Grade initialized too low*/
	try
	{
		Bureaucrat B("B", 151);
		std::cout << B << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n --- \n\n";
	/*Grade going up and became too high*/
	try 
	{
		Bureaucrat C("C", 3);
		std::cout << C << std::endl;
		C.gradeUp();
		std::cout << C << std::endl;
		C.gradeUp();
		std::cout << C << std::endl;
		C.gradeUp();
		std::cout << C << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n --- \n\n";
	/*Grade going down and became too low*/
	try 
	{
		Bureaucrat D("D", 148);
		std::cout << D << std::endl;
		D.gradeDown();
		std::cout << D << std::endl;
		D.gradeDown();
		std::cout << D << std::endl;
		D.gradeDown();
		std::cout << D << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n --- \n";
	std::cout << "\nEND\n\n";
	return (0);
}