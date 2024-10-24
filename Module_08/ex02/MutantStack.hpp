/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:48:40 by egiubell          #+#    #+#             */
/*   Updated: 2024/10/24 12:30:13 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iostream>
#include <iterator>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		MutantStack(){}
		~MutantStack(){}
		MutantStack(const MutantStack &obj)
		{
			if (*this != obj)
				*this = std::stack<T, Container>::operator=(obj);
		}
		MutantStack& operator=(const MutantStack &obj)
		{
			if (*this != obj)
				this->c = obj.c;
			return *this;
		}

		typedef typename Container::iterator iterator;
		iterator	begin()
		{
			return (this->c.begin());
		}
		iterator end()
		{
			return (this->c.end());
		}
};

#endif
