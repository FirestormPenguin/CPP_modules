/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:54:51 by egiubell          #+#    #+#             */
/*   Updated: 2024/04/04 18:59:09 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed _x;
		const Fixed _y;

	public:
		Point();
		Point( const float x, const float y );
		Point( const Point &src );
		~Point();

		Point&  operator=( const Point &rhs );

		Fixed getX( void ) const ;
		Fixed getY( void ) const ;
};

bool bsp( Point const a, Point const b, Point const c, Point const point );

#endif