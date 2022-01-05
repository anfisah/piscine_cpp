#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap cam("Camille");
	ClapTrap louis("Louis");

	cam.attack("Louis");
	louis.takeDamage(3);
	louis.beRepaired(5);
	cam.takeDamage(14);
	
	return 0;
}