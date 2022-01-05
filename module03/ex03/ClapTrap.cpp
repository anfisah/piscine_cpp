#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->_name << " was created !" << std::endl;
	std::cout << std::endl;

	return ;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "Copy constructeur ClapTrap was created !" << std::endl;
	std::cout << std::endl;

	*this = src;

	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_name << " was destroyed !" << std::endl;
	std::cout << std::endl;

	return ;
}

void ClapTrap::attack(std::string const & target)
{
	if (this->_energyPoints < this->_attackDamage)
		std::cout << "Not enought energy to attack" << std::endl;
	else
	{
		this->_energyPoints -= this->_attackDamage;
		std::cout << "Attack ClapTrap : " << this->_name << " attack " << target
				<< ", causing " << this->_attackDamage << " energy point." << std::endl;
		std::cout << this->_name << " have now " << this->_energyPoints << " energy poins !" << std::endl;
		std::cout << std::endl;
	}
	return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints < amount)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
	std::cout << "Take damage: " << this->_name << " have now " << this->_hitPoints << " hit points." << std::endl;
	std::cout << std::endl;

	return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;
	std::cout << "Be Repaired: " << this->_name << " have now " << this->_hitPoints << " hit points." << std::endl;
	std::cout << std::endl;

	return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	
	return *this;
}