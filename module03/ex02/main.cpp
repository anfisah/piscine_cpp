#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap cam("Camille");
	ClapTrap louis("Louis");
	ScavTrap manon("Manon");
	FragTrap lea("lea");

	manon.guardGate();
	cam.attack("Louis");
	louis.takeDamage(3);
	louis.beRepaired(5);
	cam.takeDamage(14);
	manon.attack("cam");
	louis.takeDamage(4);
	lea.beRepaired(44);
	lea.takeDamage(38);
	lea.attack("manon");
	lea.highFivesGuys();
	
	
	return 0;
}