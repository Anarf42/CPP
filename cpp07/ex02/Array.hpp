/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 17:12:57 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/09/12 13:22:17 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array
{	
	private:
		T				*_array;
		unsigned int	_size;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array<T> &copy);
		Array<T> &operator=(const Array<T> &copy);
		~Array();

		T			&operator[](unsigned int index);
		const	T	&operator[](unsigned int index) const;
		unsigned	int	size() const;
};

#include "Array.tpp"

#endif