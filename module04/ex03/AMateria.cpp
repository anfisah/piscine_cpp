#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type)
{
	return ;
}

AMateria::~AMateria(void)
{
	return ;
}

std::string const & AMateria::getType() const
{
	return this->_type;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	return ;
}