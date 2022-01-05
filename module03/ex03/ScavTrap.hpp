#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &src);
		virtual ~ScavTrap(void);
		ScavTrap &operator=(ScavTrap const & rhs);
		void attack(std::string const & target);
		void guardGate(void);
};

#endif