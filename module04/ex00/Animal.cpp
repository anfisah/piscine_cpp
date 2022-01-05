#include "Animal.hpp"

Animal::Animal(void) : _type("domestique")
{
	std::cout << "Animal default constructor called !" << std::endl;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called !" << std::endl;
	return;
}

Animal::Animal(const Animal &src)
{
	std::cout << "Copy constructeur Animal was created !" << std::endl;
	std::cout << std::endl;

	*this = src;

	return ;
}

Animal & Animal::operator=(Animal const & rhs)
{
	this->_type = rhs._type;
	return *this;
}


void Animal::makeSound(void) const
{
	std::cout << "Sound of Animal" << std::endl;

	return ;
}

std::string Animal::getType(void) const
{
	return this->_type;
}