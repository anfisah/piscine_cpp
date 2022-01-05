#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->_type = "wrongCat";
	std::cout << "WrongCat default constructor called !" << std::endl;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongACat destructor called !" << std::endl;
	return;
}

WrongCat::WrongCat(const WrongCat &src)
{
	std::cout << "Copy constructeur WrongCat was created !" << std::endl;
	std::cout << std::endl;

	*this = src;

	return ;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
	this->_type = rhs._type;
	return *this;
}

void WrongCat::makeSound(void) const
{
	std::cout << "Sound of Cat" << std::endl;

	return ;
}

std::string WrongCat::getType(void) const
{
	return this->_type;
}