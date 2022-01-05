#include "Convert.hpp"

Convert::Convert(std::string value) : _value(value)
{
	return ;
}

Convert::~Convert(void)
{
	return ;
}

Convert::Convert(const Convert &src)
{
	*this = src;
}

Convert &Convert::operator=(const Convert &rhs)
{
	if (this == &rhs)
		return (*this);
	this->_value = rhs._value;
	return *this;
}

std::string Convert::getValue(void) const
{
	return this->_value;
}

float Convert::toFloat()
{
	float value = atof(_value.c_str());

	if (value < INT_MIN)
		throw MoinsInfini();
	if (value > INT_MAX)
		throw PlusInfini();
	return value;
}

char Convert::toChar()
{
	if (_value.compare("nan") == 0)
		throw Impossible();
	if (isprint(toInt()) == 0)
		throw NonDisplayable();
	return static_cast<char>(toFloat());
}

int Convert::toInt()
{
	return static_cast<int>(toFloat());
}

double Convert::toDouble()
{
	return static_cast<double>(toFloat());
}

void Convert::convert(void)
{
	if (_value.compare("nan") != 0 && _value[0] != '-')
	{
		if (!isdigit(_value[0]))
			return ;
	}

	try{
		std::cout << "char : " << toChar() << std::endl;
	} catch(std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "int : ";
	try{
		if (_value.compare("nan") == 0)
			throw Impossible();
		std::cout << toInt() << std::endl;
	} catch(std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Float: ";
	try {
		if (toFloat() - toInt() == 0)
			std::cout << toFloat() << ".0" << "f" << std::endl;
		else
			std::cout << toFloat() << "f" << std::endl;
	} catch(std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Double: ";
	try {
		if (toFloat() - toInt() == 0)
			std::cout << toDouble() << ".0"<< std::endl;
		else
			std::cout << toDouble() << std::endl;
	} catch(std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}
