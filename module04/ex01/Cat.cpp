#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	this->_type = "Cat";
	std::cout << "Cat default constructor called !" << std::endl;

	_brainCat = new Brain();

	return ;
}

Cat::~Cat(void)
{
	delete _brainCat;
	std::cout << "Cat destructor called !" << std::endl;
	return ;
}

Cat::Cat(const Cat &src)
{
	std::cout << "Copy constructeur Cat was created !" << std::endl;

	*this = src;

	return ;
}

Cat & Cat::operator=(Cat const & rhs)
{
	_brainCat = new Brain;
	*_brainCat = *(rhs._brainCat);

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

Brain *Cat::getBrain() const
{ 
	return _brainCat;
}

