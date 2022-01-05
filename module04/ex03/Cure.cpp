#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure(void) : AMateria("cure")
{
	return ;
}

Cure::~Cure(void)
{
	return ;
}

Cure::Cure(const Cure & src) : AMateria("cure")
{
	*this = src;
	return;
}

Cure & Cure::operator=(Cure const & rhs)
{
	this->_type = rhs._type;
	
	return *this;
}

std::string const & Cure::getType() const
{
	return this->_type;
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;

	return;
}