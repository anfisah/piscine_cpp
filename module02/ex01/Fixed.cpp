#include "Fixed.hpp"

Fixed::Fixed(void) : fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;

	return ;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	fixedPoint = roundf(f * (1 << bits));

	return ;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	fixedPoint = i << bits;

	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;

	return ;
}

int Fixed::getRawBits(void) const
{
	return this->fixedPoint;
}

float Fixed::toFloat(void) const
{
	return (fixedPoint / (float)(1 << bits));
}

int Fixed::toInt(void) const
{
	return fixedPoint >> Fixed::bits;
}

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->fixedPoint = rhs.getRawBits();

	return *this;
}

std::ostream& operator<<(std::ostream &flux, Fixed const & fixedPoint)
{
	flux << fixedPoint.toFloat();
	return flux;
}

