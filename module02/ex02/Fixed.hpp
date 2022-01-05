#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const & inst);
		Fixed(const float f);
		Fixed(const int i);
		~Fixed(void);
		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
		bool operator==(Fixed const& rhs) const;
		bool operator!=(Fixed const& rhs) const;
		bool operator<(Fixed const& rhs) const;
		bool operator>(Fixed const& rhs) const;
		bool operator>=(Fixed const& rhs) const;
		bool operator<=(Fixed const& rhs) const;
		Fixed &	operator=(Fixed const & rhs);
		Fixed operator+(Fixed const & rhs) const;
		Fixed operator++(int);
		Fixed operator++(void);
		Fixed operator--(int);
		Fixed operator--(void);
		Fixed operator-(Fixed const & rhs) const;
		Fixed operator*(Fixed const & rhs) const;
		Fixed operator/(Fixed const & rhs) const;
		static Fixed& min(Fixed& a, Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& min(Fixed const &a, Fixed const &b);
		static const Fixed& max(Fixed const &a, Fixed const &b);



	private:
		int fixedPoint;
		static const int bits = 8;
};

std::ostream& operator<<(std::ostream &flux, Fixed const & fixedPoint);

#endif