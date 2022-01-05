#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &src);
		~DiamondTrap(void);
		DiamondTrap & operator=(DiamondTrap const & rhs);
		void attack(std::string const & target);
		void whoAmI(void);
	private:
		std::string _name;
};

#endif