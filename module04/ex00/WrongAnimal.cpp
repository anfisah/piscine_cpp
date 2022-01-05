#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("domestique")
{
	std::cout << "WrongAnimal default constructor called !" << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called !" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	std::cout << "Copy constructeur Animal was created !" << std::endl;
	std::cout << std::endl;

	*this = src;

	return ;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
	this->_type = rhs._type;
	return *this;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "Sound of Animal" << std::endl;

	return ;
}

std::string WrongAnimal::getType(void) const
{
	return this->_type;
}

