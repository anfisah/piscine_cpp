#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const Fixed &inst);
		Fixed(const float f);
		Fixed(const int i);
		~Fixed(void);
		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits(void) const;
		Fixed &	operator=(Fixed const & rhs);
	private:
		int fixedPoint;
		static const int bits = 8;
};

std::ostream& operator<<(std::ostream &flux, Fixed const & fixedPoint);

#endif