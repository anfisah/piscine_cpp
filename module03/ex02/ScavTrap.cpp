#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "ScavTrap " << name << " was created !" << std::endl;
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
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
	
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
