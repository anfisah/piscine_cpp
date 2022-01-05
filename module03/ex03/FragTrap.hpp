#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap &src);
		virtual ~FragTrap(void);
		void highFivesGuys(void);
		FragTrap &operator=(FragTrap const & rhs);
};

#endif