#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
	std::cout << "Hit point : " << this->_hitPoints << std::endl;
	std::cout << "Energy points : " << this->_energyPoints << std::endl;
	std::cout << "Attack Damage : " << this->_attackDamage << std::endl;
	std::cout << "DiamondTrap " << this->_name << " was created !" << std::endl;
	std::cout << std::endl;

	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src), FragTrap(src), ScavTrap(src)
{
	std::cout << "DiamondTrap : Copy constructor was created !" << std::endl;
	std::cout << std::endl;

	*this = src;

	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout <<  "DiamondTrap " << this->_name << " was destroyed !" << std::endl;
	std::cout << std::endl;

	return ;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs)
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	
	return *this;
}

void DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);

	return ;
}


void DiamondTrap::whoAmI(void)
{
	std::cout << "My DiamondTrap name is " << this->_name 
	<< " and my ClapTrap name is "<< this->ClapTrap::_name << std::endl;
	std::cout << std::endl;

}
