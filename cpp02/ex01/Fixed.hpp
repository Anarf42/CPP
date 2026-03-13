#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

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
		~Fixed();

		int		etRawBits(void) const;
		void	setRawBits(int const raw);
        float	toFloat(void) const;
        int		toInt(void) const;
};

#endif