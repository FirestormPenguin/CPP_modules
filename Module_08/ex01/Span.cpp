/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:42:06 by egiubell          #+#    #+#             */
/*   Updated: 2024/10/23 15:16:42 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : N(0), numbers()
{
}

Span::Span(unsigned int N) : N(N), numbers()
{
}

Span::Span(const Span& other) : N(other.N), numbers(other.numbers)
{
}

Span::~Span(void) {}

Span&	Span::operator=(const Span& other)
{
	if (this != &other) {
		this->N = other.N;
		this->numbers = other.numbers;
	}
	return (*this);
}

void Span::addNumber(int number)
{
	if (numbers.size() >= N)
		throw std::runtime_error("Span is already full");
	numbers.push_back(number);
}

int Span::shortestSpan()
{
	if (numbers.size() < 2)
		throw std::runtime_error("Not enough numbers to calculate span");
	std::sort(numbers.begin(), numbers.end());
	int shortest = numbers[1] - numbers[0];
	for (size_t i = 2; i < numbers.size(); i++)
	{
		int span = numbers[i] - numbers[i - 1];
		if (span < shortest) {
			shortest = span;
		}
	}
	return shortest;
}

int Span::longestSpan()
{
	if (numbers.size() < 2)
		throw std::runtime_error("Not enough numbers to calculate span");
	std::sort(numbers.begin(), numbers.end());
	return numbers.back() - numbers.front();
}



