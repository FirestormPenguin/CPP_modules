/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:22:29 by egiubell          #+#    #+#             */
/*   Updated: 2024/09/14 16:52:41 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base() {}

Base *generate()
{
	std::srand(time(NULL));

	int n = rand() % 3;
	switch (n)
	{
		case 0:
			std::cout<< "Generating A class" << std::endl;
			return new A;
		case 1:
			std::cout<< "Generating B class" << std::endl;
			return new B;
		case 2:
			std::cout<< "Generating C class" << std::endl;
			return new C;
	}

	std::cout << "Error: for some reason can't generate a class" << std::endl;
	return NULL;
}

void identify(Base* ptr)
{
	if (dynamic_cast<A*>(ptr) != NULL)
	{
		std::cout << "The class is A" << std::endl;
	}
	else if (dynamic_cast<B*>(ptr) != NULL)
	{
		std::cout << "The class is B" << std::endl;
	}
	else if (dynamic_cast<C*>(ptr) != NULL)
	{
		std::cout << "The class is C" << std::endl;
	}
	else
	{
		std::cout << "Can't identify the class" << std::endl;
	}
}

void identify(Base& p)
{
	try
	{
		A& tmp = dynamic_cast<A&>(p);
		(void)tmp;
		std::cout << "The class is A" << std::endl;
		return;
	}

	catch (...) {}

	try
	{
		B& tmp = dynamic_cast<B&>(p);
		(void)tmp;
		std::cout << "The class is B" << std::endl;
		return;
	}

	catch (...) {}

	try
	{
		C& tmp = dynamic_cast<C&>(p);
		(void)tmp;
		std::cout << "The class is C" << std::endl;
		return;
	}

	catch (...) {}

	std::cout << "Can't identify the class" << std::endl;
}
