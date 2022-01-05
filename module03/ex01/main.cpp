#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap cam("Camille");
	ClapTrap louis("Louis");
	ScavTrap manon("Manon");

	cam.attack("Louis");
	louis.takeDamage(3);
	louis.beRepaired(5);
	cam.takeDamage(14);
	manon.guardGate();
	manon.attack("cam");
	louis.attack("Manon");
	louis.takeDamage(4);

	
	return 0;
}