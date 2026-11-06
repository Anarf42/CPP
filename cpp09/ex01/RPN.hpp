/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 14:45:10 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/11/06 17:05:45 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <string>

class RPN
{
	private:
		std::stack<int>	_stack;
		int	safeOperation(int a, int b, char op);
	public:
		RPN();
		RPN(const RPN& other);
		RPN& operator=(const RPN& other);
		~RPN();

		void	calculate(const std::string& expr);
};


#endif