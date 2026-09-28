/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 14:09:22 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/09/17 19:39:32 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iterator>
#include <stdexcept>
#include <iostream>

class Span
{
	private:
		unsigned int _maxSize;
		std::vector<int> _numbers;
	public:
		Span();
		Span(unsigned int n);
		Span(Span const& copy);
		Span &operator=(Span const& copy);
		~Span();

		void			addNumber(int number);
		template <typename Iterator>
		void addNumbers(Iterator first, Iterator last)
		{
			unsigned int count = static_cast<unsigned int>(std::distance(first, last));
			if (_numbers.size() + count > _maxSize)
				throw std::runtime_error("Span is full");
			_numbers.insert(_numbers.end(), first, last);
		}
		unsigned int	shortestSpan() const;
		unsigned int	longestSpan() const;
};

#endif