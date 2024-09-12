/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 16:51:10 by egiubell          #+#    #+#             */
/*   Updated: 2024/09/12 18:10:24 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
	*this = other;
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) { (void)other; return *this; }

void ScalarConverter::convert(const std::string& param)
{
	std::string specialTypes[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
	std::string toChar = "";
	int toInt = 0;
	float toFloat = 0;
	double toDouble = 0;

	if (param.size() == 1 && std::isprint(param[0]) && !std::isdigit(param[0]))
	{
		toChar = param[0];
		std::cout << "char: " << toChar << std::endl;
		std::cout << "int: " << static_cast<int>(toChar[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(toChar[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(toChar[0]) << ".0" << std::endl;
		return;
	}

	toInt = std::atoi(param.c_str());

	if (param[param.length() - 1] == 'f')
	{
		toFloat = std::atof(param.c_str());
		toDouble = static_cast<double>(toFloat);
	}
	else
	{
		toDouble = std::atof(param.c_str());
		toFloat = static_cast<float>(toDouble);
	}

	for (int i = 0; i < 6; ++i)
	{
		if (param == specialTypes[i])
		{
			toChar = "imposible";
			break;
		}
	}
	if (toChar == "" && (toInt >= 32 && toInt <= 126))
	{
		toChar = "'";
		toChar += static_cast<char>(toInt);
		toChar += "'";
	}
	else if (toChar == "")
	{
		toChar = "Non displayable";
	}

	std::cout << "char: " << toChar << std::endl;
	if (toChar == "imposible")
	{
		std::cout << "int: imposible" << std::endl;
	}
	else
	{
		std::cout << "int: " << toInt << std::endl;
	}

	if (toChar == "imposible" && toFloat == 0)
	{
		std::cout << "float: imposible" << std::endl;
		std::cout << "double: imposible" << std::endl;
	}
	else
	{
		if (toChar != "imposible" && toFloat - static_cast<int>(toFloat) == 0)
		{
			std::cout << "float: " << toFloat << ".0f" << std::endl;
			std::cout << "double: " << toDouble << ".0" << std::endl;
		}
		else
		{
			std::cout << "float: " << toFloat << "f" << std::endl;
			std::cout << "double: " << toDouble << std::endl;
		}
	}
}
