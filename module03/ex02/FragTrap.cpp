#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "FragTrap " << name << " was created !" << std::endl;
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
