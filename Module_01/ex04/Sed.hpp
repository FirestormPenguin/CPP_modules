/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 18:14:20 by egiubell          #+#    #+#             */
/*   Updated: 2024/04/03 18:45:50 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

class Sed
{
private:
	std::string _inFile;
	std::string _outFile;

public:
	Sed(std::string filename);
	~Sed();

	void	replace(std::string s1, std::string s2);
};

#endif