/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 10:40:26 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/09/09 00:44:18 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP


template <typename T>void swap(T &a, T &b)
{
	T tmp(a);

	a = b;
	b = tmp;
}

template <typename T>T &min(T &a, T &b)
{
	if (a < b)
		return a;
	return b;
}

template <typename T>T &max(T &a, T &b)
{
	if (a > b)
		return a;
	return b;
}

#endif