#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_fixedNumber;
		static	const	int	_fractionalBits = 8;
	public:
		Fixed();
		Fixed(const Fixed& copy);
		Fixed& operator=(const Fixed& copy);
        Fixed(const int parameter);
        Fixed(const float number);

		Fixed operator+(const Fixed& a) const;
		Fixed operator-(const Fixed& a) const;
		Fixed operator*(const Fixed& a) const;
		Fixed operator/(const Fixed& a) const;
		bool operator>(const Fixed& other) const;
		bool operator<(const Fixed& other) const;

		~Fixed();

		int		getRawBits(void) const; 
		void	setRawBits(int const raw);
        float	toFloat(void) const;
        int		toInt(void) const;
		static	Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);
		static	Fixed& min(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif