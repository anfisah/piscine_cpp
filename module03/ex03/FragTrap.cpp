#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " was created !" << std::endl;
	std::cout << std::endl;

	return ;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
	std::cout << "Copy constructeur FragTrap was created !" << std::endl;
	std::cout << std::endl;

	*this = src;

	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_name << " was destroyed !" << std::endl;
	std::cout << std::endl;

	return ;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap highFivesGuys." << std::endl;
	std::cout << std::endl;

	return ;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	
	return *this;
}
