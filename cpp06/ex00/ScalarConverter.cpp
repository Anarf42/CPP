/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 19:52:19 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/09/13 16:57:56 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <climits>
#include <cerrno>
#include <iomanip>
#include <cfloat>
#include <cmath>

enum LiteralType
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	PSEUDO,
	INVALID
};

ScalarConverter::ScalarConverter()
{
	std::cout << "Default constructor" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& copy)
{
	(void)copy;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& copy)
{
	(void)copy;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "Destructor" << std::endl;
}

static	bool	isPseudo(const std::string& str)
{
	if (str == "nan" || str == "+inf" || str == "-inf" || str == "nanf" || str == "+inff" || str == "-inff")
		return (true);
	return (false);
}
static	bool	isChar(const std::string& str)
{
	if (str.length() == 1 && (str[0] < '0' || str[0] > '9'))
		return (true);
	return (false);

}
static	bool	isInt(const std::string& str)
{
	size_t	i;

	if (str.empty())
		return false;
	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (str.length() == i)
		return false;
	while (i < str.length())
	{
		if (str[i] < '0' || str[i] > '9')
			return false;
		i++;
	}
	return (true);
}

static	bool	isFloat(const std::string& str)
{
	size_t	i;
	size_t	start;
	size_t	posDot;
	bool	hasDot;

	if (str.empty())
		return false;
	if (str[str.length() - 1] != 'f')
		return false;
	i = 0;
	start = 0;
	posDot = 0;
	hasDot = false;
	if (str[i] == '+' || str[i] == '-')
	{
		i++;
		start = i;
	}
	for (; i < str.length() - 1; i++)
	{
		if (str[i] == '.')
		{
			if (hasDot)
				return false;
			hasDot = true;
			posDot = i;
		}
		else if (!std::isdigit(static_cast<unsigned char>(str[i])))
			return false;
	}
	if (!hasDot)
		return false;
	if (posDot == start || posDot == str.length() - 2)
		return false;
	return true;
}

static	bool	isDouble(const std::string& str)
{
	size_t	i;
	size_t	start;
	size_t	posDot;
	bool	hasDot;

	if (str.empty())
		return false;
	if (str[str.length() - 1] == 'f')
		return false;
	i = 0;
	start = 0;
	posDot = 0;
	hasDot = false;
	if (str[i] == '+' || str[i] == '-')
	{
		i++;
		start = i;
	}
	for(; i < str.length(); i++)
	{
		if (str[i] == '.')
		{
			if (hasDot)
				return false;
			hasDot = true;
			posDot = i;
		}
		else if (!std::isdigit(static_cast<unsigned char>(str[i])))
			return false;
	}
	if (!hasDot)
		return false;
	if (posDot == start || posDot == str.length() - 1)
		return false;
	return true;
}

static	void	printChar(double truncated, double value)
{
	if (truncated < 0 || truncated > 127)
		std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(static_cast<unsigned char>(truncated)))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
}

static	void	printInt(double truncated, double value)
{
	if (truncated < static_cast<double>(INT_MIN) || truncated > static_cast<double>(INT_MAX))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(value) << std::endl;
}

static	void	printFloat(double value)
{
	float f;

	if (value < -FLT_MAX || value > FLT_MAX)
	{
		std::cout << "float: impossible" << std::endl;
		return ;
	}
	if (std::floor(value) == value)
		std::cout << std::fixed << std::setprecision(1);
	else
	{
		std::cout.unsetf(std::ios::floatfield);
		std::cout << std::setprecision(7);
	}
	f = static_cast<float>(value);
	std::cout << "float: " << f << "f" << std::endl;
}

static	void	printDouble(double value)
{
	if (std::floor(value) == value)
		std::cout << std::fixed << std::setprecision(1);
	else
	{
		std::cout.unsetf(std::ios::floatfield);
		std::cout << std::setprecision(15);
	}
	std::cout << "double: " << static_cast<double>(value) << std::endl;
}

static void	convertInvalid()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}

static	double	truncateValue(double value)
{
	if (value < 0)
		return (std::ceil(value));
	return (std::floor(value));
}

static	void	convertChar(const std::string& str)
{
	char c = str[0];
	double d = static_cast<double>(c);

	std::cout << "char: '" << c << "'" << std::endl;
	printInt(d, d);
	printFloat(d);
	printDouble(d);
}

static void	convertInt(const std::string& str)
{
	long	value;
	double	d;

	errno = 0;
	value = std::strtol(str.c_str(), NULL, 10);
	errno = 0;
	d = std::strtod(str.c_str(), NULL);
	if (errno == ERANGE)
	{
		convertInvalid();
		return;
	}
	printChar(truncateValue(d), d);

	if (value < INT_MIN || value > INT_MAX)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	printFloat(d);
	printDouble(d);
}

static	void	convertFloat(const std::string& str)
{
	std::string nbr;
	double	parsed;
	double	truncated;
	float	value;

	nbr	= str.substr(0, str.length() - 1);
	errno = 0;
	parsed = std::strtod(nbr.c_str(), NULL);
	if (errno == ERANGE || parsed < -FLT_MAX || parsed > FLT_MAX)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return;
	}
	value = static_cast<float>(parsed);
	truncated = truncateValue(static_cast<double>(value));

	printChar(truncated, static_cast<double>(value));
	printInt(truncated, static_cast<double>(value));
	printFloat(static_cast<double>(value));
	printDouble(static_cast<double>(value));
}

static	void	convertDouble(const std::string& str)
{
	
	double	value;
	double	truncated;

	errno = 0;
	value = std::strtod(str.c_str(), NULL);
	if (errno == ERANGE)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return;
	}
	truncated = truncateValue(value);
	printChar(truncated, value);
	printInt(truncated, value);
	printFloat(value);
	printDouble(value);
}

static	void	convertPseudo(const std::string& str)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;

	if (str == "nan" || str == "nanf")
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (str == "+inf" || str == "+inff")
	{
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else if (str == "-inf" || str == "-inff")
	{
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
}

static	LiteralType	detectType(const std::string& str)
{
	if (isPseudo(str))
		return (PSEUDO);
	if (isInt(str))
		return (INT);
	if (isChar(str))
		return (CHAR);
	if (isFloat(str))
		return (FLOAT);
	if (isDouble(str))
		return (DOUBLE);
	return (INVALID);
}

void	ScalarConverter::convert(const std::string& str)
{
	LiteralType	type;

	type = detectType(str);
	switch (type)
	{
	case PSEUDO:
		convertPseudo(str);
		break;
	case INT:
		convertInt(str);
		break;
	case CHAR:
		convertChar(str);
		break;
	case FLOAT:
		convertFloat(str);
		break;
	case DOUBLE:
		convertDouble(str);
		break;
	default:
		convertInvalid();
		break;
	}
}