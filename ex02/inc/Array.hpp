/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 14:27:31 by fcretin           #+#    #+#             */
/*   Updated: 2025/06/16 15:23:42 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN  "\033[32m"
#define BLUE  "\033[34m"
#define YELLOW "\033[33m"

template<typename T>
class Array
{
	private :
	// {

		unsigned int	_n;
		T				*_array;

	// }
	public :
	// {

		Array( void );							//Canonical
		Array( const Array &other);				//Canonical
		Array &operator=( const Array &other );	//Canonical
		~Array( void );							//Canonical


		Array(unsigned int n);

		T &operator[]( const int &index );


		unsigned int size( void ) const;

	// }
};

#endif
