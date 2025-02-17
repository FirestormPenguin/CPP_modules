/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:05:35 by egiubell          #+#    #+#             */
/*   Updated: 2024/10/24 12:27:17 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
int easyfind(T &container, int n)
{
	std::vector<int>::iterator it;
	it = std::find(container.begin(), container.end(), n);
	if (it != container.end())
		std::cout << "Element " << n << " found at position: " << std::distance(container.begin(), it) << std::endl;
	else
		std::cout << "Element " << n << " not found." << std::endl;
	return 0;
}

#endif
