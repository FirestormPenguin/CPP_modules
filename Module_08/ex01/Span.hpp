/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:38:18 by egiubell          #+#    #+#             */
/*   Updated: 2024/10/24 12:27:20 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iostream>
#include <iterator>

class Span
{
	private:
		unsigned int N;
		std::vector<int> numbers;

	public:
		Span(void);
		Span(unsigned int N);
		Span(const Span& other);
		~Span(void);
		Span&	operator=(const Span& other);

		void addNumber(int number);
		int shortestSpan();
		int longestSpan();
		void addNumber();
		void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);

};

#endif
