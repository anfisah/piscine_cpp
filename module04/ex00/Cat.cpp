#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	this->_type = "Cat";
	std::cout << "Cat default constructor called !" << std::endl;

	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called !" << std::endl;
	return ;
}

Cat::Cat(const Cat &src)
{
	std::cout << "Copy constructeur Cat was created !" << std::endl;
	std::cout << std::endl;

	*this = src;

	return ;
}

Cat & Cat::operator=(Cat const & rhs)
{
	this->_type = rhs._type;
	return *this;
}


void Cat::makeSound(void) const
{
	std::cout << "Sound of Cat" << std::endl;

	return ;
}

std::string Cat::getType(void) const
{
	return this->_type;
}