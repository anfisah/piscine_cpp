#include "Fixed.hpp"

int bits = 8;

Fixed::Fixed(void) : fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
	
	return ;
}

Fixed::Fixed(Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;

	return ;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixedPoint;
}

void Fixed::setRawBits(int const raw)
{
	fixedPoint = raw;

	return ;
}

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->fixedPoint = rhs.getRawBits();

	return *this;
}

