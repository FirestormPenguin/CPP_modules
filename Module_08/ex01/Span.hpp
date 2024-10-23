/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:38:18 by egiubell          #+#    #+#             */
/*   Updated: 2024/10/23 15:15:52 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iostream>

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

};
