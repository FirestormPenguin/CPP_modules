/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:00:23 by egiubell          #+#    #+#             */
/*   Updated: 2024/10/24 12:28:27 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private:
		T		*data;
		int		_size;
	public:
		Array(void);
		Array(unsigned int n);
		Array(const Array& copy);
		~Array(void);

		T		&operator[](int idx) const;
		Array	&operator=(const Array &other);
		int		size(void) const;
};

template <typename T>
Array<T>::Array(void) : data(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : data(new T[n]), _size(n) {}

template <typename T>
Array<T>::Array(const Array &copy) : _size(copy.size)
{
	for (int i = 0; i < copy._size; i++)
		this->data[i] = copy.data[i];
}

template <typename T>
Array<T>::~Array(void)
{
	delete[] this->data;
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array &other)
{
	if (this == &other)
		return (*this);
	if (this->_size > 0)
		delete[] this->data;

	this->_size = other._size;
	this->data = new T[_size];
	for (int i = 0; i < other._size; i++)
		this->data[i] = other.data[i];
	return (*this);
}

template <typename T>
T&			Array<T>::operator[](int idx) const
{
	if (idx < 0 || idx >= _size)
		throw std::overflow_error("Index out of bounds");
	return (this->data[idx]);
}

template <typename T>
int			Array<T>::size(void) const
{
	return (this->_size);
}

template <typename T>
std::ostream&	operator<<(std::ostream& out, const Array<T>& array)
{
	out << "Array = { ";
	for (int i = 0; i < array.size(); i++)
	{
		out << array[i];
		if (i != array.size() - 1)
			out << ", ";
	}
	out << " }";
	return (out);
}

#endif
