/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:22:26 by egiubell          #+#    #+#             */
/*   Updated: 2024/09/14 16:28:31 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP_
# define BASE_HPP_


#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <limits.h>
#include <float.h>
#include <cstdlib>

class Base
{
	public:
		virtual ~Base();
};

class A : public Base
{};

class B : public Base
{};

class C : public Base
{};

Base *generate();

void identify(Base* p);

void identify(Base& p);

#endif
