/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 17:52:40 by egiubell          #+#    #+#             */
/*   Updated: 2024/04/04 18:46:50 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_fixedPointValue;
		static const int	_fractionalBits = 8;

	public:
		Fixed( void );
		Fixed( const int n );
		Fixed( const float n );
		Fixed( const Fixed &rhs );
		Fixed& operator=( const Fixed &rhs );
		~Fixed();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		float	toFloat( void ) const;
		int		toInt( void ) const;

		/*-----------------operators ex02-----------------*/
		
		bool	operator>( const Fixed &rhs ) const ;
		bool	operator<( const Fixed &rhs ) const ;
		bool	operator>=( const Fixed &rhs ) const ;
		bool	operator<=( const Fixed &rhs ) const ;
		bool	operator==( const Fixed &rhs ) const ;
		bool	operator!=( const Fixed &rhs ) const ;

		Fixed	operator+( const Fixed &rhs ) const ;
		Fixed	operator-( const Fixed &rhs ) const ;
		Fixed	operator*( const Fixed &rhs ) const ;
		Fixed	operator/( const Fixed &rhs ) const ;

		Fixed&	operator++( void ); // pre
		Fixed	operator++( int ); // post
		Fixed&	operator--( void ); // pre
		Fixed	operator--( int ); // post

		// static Fixed& min( Fixed &a, Fixed &b );
		static const Fixed& min( const Fixed &a, const Fixed &b );
		// static Fixed& max( Fixed &a, Fixed &b );
		static const Fixed& max( const Fixed &a, const Fixed &b );
};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif