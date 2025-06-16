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

		//			Array( void );
		//			Array( const Array &other);
		//			Array &operator=( const Array &other );
		//			~Array( void );

		//			Array(unsigned int n);
		//			T &operator[]( const int &index );
		//			const unsigned int size( void ) const;

		Array( void ) : _n(0), _array(NULL) {}

		Array( const Array &other) : _n(other._n), _array(new T[other._n])
		{
			for (unsigned int i = 0; i < this->_n; i++)
				this->_array[i] = other._array[i];

		}

		Array &operator=( const Array &other )
		{
			if (*this != other)
			{
				delete[] this->_array;
				this->_n = other._n;
				this->_array = new T[this->_n];

				for (unsigned int i = 0; i < this->_n; i++)
					this->_array[i] = other._array[i];
			}
			return (*this);
		}

		~Array( void ) {}


		Array(unsigned int n) : _n(n), _array(new T[n]) {}


		T &operator[]( const unsigned int &index )
		{
			if (index >= this->_n)
				throw std::runtime_error("Wrong index");
			return (this->_array[index]);
		}



		const unsigned int &size( void ) const { return (this->_n); }

	// }
};


#endif
