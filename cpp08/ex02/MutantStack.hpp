/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:50:45 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/11/02 14:36:29 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	private:
	public:
		MutantStack();
		MutantStack(const MutantStack<T> &copy);
		MutantStack<T> &operator=(const MutantStack<T> &copy);
		~MutantStack();
		
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::iterator iterator;

		const_iterator begin() const;
		const_iterator end() const;

		iterator begin();
		iterator end();
};

#include "MutantStack.tpp"
#endif