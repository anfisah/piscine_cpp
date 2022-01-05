#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice(void) : AMateria("ice")
{
	return ;
}

Ice::~Ice(void)
{
	return ;
}

Ice::Ice(const Ice & src) : AMateria("ice")
{
	*this = src;
	return;
}

Ice & Ice::operator=(Ice const & rhs)
{
	this->_type = rhs._type;
	
	return *this;
}

std::string const & Ice::getType() const
{
	return this->_type;
}

AMateria* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;

	return ;
}