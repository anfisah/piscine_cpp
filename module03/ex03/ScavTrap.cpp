#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << this->_name << " was created !" << std::endl;
	std::cout << std::endl;

	return ;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
	std::cout << "Copy constructeur ScavTrap was created !" << std::endl;
	std::cout << std::endl;

	*this = src;

	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->_name << " was destroyed !" << std::endl;
	std::cout << std::endl;

	return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	
	return *this;
}

void ScavTrap::attack(std::string const & target)
{
	this->_energyPoints -= this->_attackDamage;
	std::cout << "Attack ScavTrap : " << this->_name << " attack " << target
			<< ", causing " << this->_attackDamage << " energy point." << std::endl;
	std::cout << this->_name << " have now " << this->_energyPoints << " energy poins !" << std::endl;
	std::cout << std::endl;

	return ;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap have enterred in Gate keeper mode." << std::endl;
	std::cout << std::endl;

	return ;
}