/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 21:10:13 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/09/09 00:44:33 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array() : _array(NULL), _size(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n) : _array(NULL), _size(n)
{
	if (n > 0)
		_array = new T[n]();
}

template <typename T>
Array<T>::Array(const Array<T> &copy) : _array(NULL), _size(copy._size)
{
	if (_size > 0)
	{
		_array = new T[_size];

		try
		{
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = copy._array[i];
		}
		catch (...)
		{
			delete[] _array;
			_array = NULL;
			throw;
		}
	}
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &copy)
{
	if (this != &copy)
	{
		Array<T>	tmp(copy);
		T			*tmpArray;
		unsigned int	tmpSize;

		tmpArray = _array;
		_array = tmp._array;
		tmp._array = tmpArray;

		tmpSize = _size;
		_size = tmp._size;
		tmp._size = tmpSize;
	}
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	delete [] _array;
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw std::exception();
	return (_array[index]);
}

template <typename T>
const T &Array<T>::operator[](unsigned int index) const
{	
	if (index >= _size)
		throw std::exception();
	return (_array[index]);
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (_size);
}