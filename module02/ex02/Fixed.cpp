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
	fixedPoint = roundf(f * (1 <<  bits));

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

void Fixed::setRawBits(int const raw)
{
	fixedPoint = raw;

	return ;
}

float Fixed::toFloat(void) const
{
	return (fixedPoint / (float)(1 << bits));
}

int Fixed::toInt(void) const
{
	return (fixedPoint >> bits);
}

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->fixedPoint = rhs.getRawBits();

	return *this;
}

bool Fixed::operator==(Fixed const& rhs) const
{
	return this->toFloat() == rhs.toFloat();
}

bool Fixed::operator!=(Fixed const& rhs) const
{
	return this->toFloat() != rhs.toFloat();
}

bool Fixed::operator<(Fixed const& rhs) const
{
	return this->toFloat() < rhs.toFloat();
}

bool Fixed::operator>(Fixed const& rhs) const
{
	return this->toFloat() > rhs.toFloat();
}

bool Fixed::operator>=(Fixed const& rhs) const
{
	return this->toFloat() >= rhs.toFloat();;
}

bool Fixed::operator<=(Fixed const& rhs) const
{
	return this->toFloat() <= rhs.toFloat();
}

Fixed Fixed::operator+(Fixed const & rhs) const
{
	return this->toFloat() + rhs.toFloat();
}

Fixed Fixed::operator++(int)
{
	Fixed temp;
	temp.fixedPoint = fixedPoint++;
	return temp;
}

Fixed Fixed::operator++(void)
{
	Fixed temp;
	temp.fixedPoint = ++fixedPoint;
	return temp;
}

Fixed Fixed::operator--(int)
{
	Fixed temp;
	temp.fixedPoint = fixedPoint--;
	return temp;
}

Fixed Fixed::operator--(void)
{
	Fixed temp;
	temp.fixedPoint = --fixedPoint;
	return temp;
}

Fixed Fixed::operator-(Fixed const & rhs) const
{
	return this->toFloat() - rhs.toFloat();
}

Fixed Fixed::operator*(Fixed const & rhs) const
{
	return this->toFloat() * rhs.toFloat();
}

Fixed Fixed::operator/(Fixed const & rhs) const
{
	return this->toFloat() / rhs.toFloat();
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	else 
		return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	else 
		return b;
}

const Fixed& Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return a;
	else 
		return b;
}

const Fixed& Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return a;
	else 
		return b;
}

std::ostream& operator<<(std::ostream &flux, Fixed const & fixedPoint)
{
	flux << fixedPoint.toFloat();
	return flux;
}

