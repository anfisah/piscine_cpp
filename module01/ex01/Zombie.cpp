#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

void Zombie::getName(std::string name)
{
	this->_name = name;
	std::cout << "Zombie " << this->_name << " was created" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->_name << " was destroyed !" << std::endl;
	return ;
}

void	Zombie::annonce(void)
{
	std::cout << "<" << this->_name << "> " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
