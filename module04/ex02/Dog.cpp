#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	this->_type = "Dog";
	std::cout << "Dog default constructor called !" << std::endl;

	_brainDog = new Brain();
	return ;
}

Dog::~Dog(void)
{
	delete _brainDog;
	std::cout << "Dog destructor called !" << std::endl;
	return ;
}

Dog::Dog(const Dog &src)
{
	std::cout << "Copy constructeur Dog was created !" << std::endl;

	*this = src;

	return ;
}

Dog & Dog::operator=(Dog const & rhs)
{
	_brainDog = new Brain;
	*_brainDog = *(rhs._brainDog);

	this->_type = rhs._type;

	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Sound of Dog" << std::endl;

	return ;
}

std::string Dog::getType(void) const
{
	return this->_type;
}