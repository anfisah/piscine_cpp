#include "Character.hpp"

Character::Character(void) 
{
	return ;
}

Character::Character(std::string name) : _name(name) 
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::~Character(void)
{
	for(int i = 0; i <= 3; i++)
		delete inventory[i];
	return ;
}

Character::Character(const Character & src)
{
	*this = src;
	return;
}

Character & Character::operator=(Character const & rhs)
{
	for(int i = 0; i <= 3; i++)
		this->inventory[i] = rhs.inventory[i];
	return (*this);
}

std::string const & Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	for(int i = 0; i <= 3; i++)
	{
		if (inventory[i] == NULL)
		{
			inventory[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	if (inventory[idx] != NULL)
		delete inventory[idx];
	inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3 || inventory[idx] == NULL)
		return ;
	inventory[idx]->use(target);
}