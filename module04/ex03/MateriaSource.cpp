#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) 
{
	for (int i = 0; i < 4; i++)
		this->source[i] = NULL;
}

MateriaSource::~MateriaSource(void)
{
	for (unsigned int i = 0; i < 4; i++)
		delete source[i];
	return ;
}

MateriaSource::MateriaSource(const MateriaSource & src)
{
	*this = src;
	return;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
	for(int i = 0; i <= 3; i++)
		this->source[i] = rhs.source[i];
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (unsigned int i = 0; i < 4; i++)
	{	
		if(source[i] == NULL)
		{
			source[i] = m;
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 3; i >= 0; i--)
	{
		if (source[i] != NULL && source[i]->getType() == type)
			return source[i]->clone();
	}
	return (0);
}