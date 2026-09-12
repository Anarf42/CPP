/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 17:12:02 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/09/06 20:42:44 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T_array, typename T_function>
void iter(T_array *array, const std::size_t length, T_function function)
{
	for (size_t i = 0; i < length; i++)
		function(array[i]);
}

#endif