/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 16:04:59 by egiubell          #+#    #+#             */
/*   Updated: 2024/09/12 18:21:25 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCALARCONVERTER_HPP_
#define _SCALARCONVERTER_HPP_

#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <limits.h>
#include <float.h>
#include <cstdlib>

class ScalarConverter
{
	public:
		static void	convert(const std::string& param);

	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter const &src);
		~ScalarConverter();

		ScalarConverter &	operator=(ScalarConverter const &rSym);

};

#endif
