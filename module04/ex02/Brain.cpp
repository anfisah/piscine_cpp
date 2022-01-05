#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default constructor Brain was called" << std::endl;
	std::cout << std::endl;

	return ;
}

Brain::~Brain(void)
{
	std::cout << "Destructor Brain was called" << std::endl;

	return ;
}

Brain::Brain(const Brain &src)
{
	std::cout << "Copy constructeur Brain was created !" << std::endl;
	std::cout << std::endl;

	*this = src;

	return ;
}

Brain&	Brain::operator=(const Brain & op)
{
	// deep copy : un objet est créé en copiant les données
	// de toutes les variables et il alloue également des 
	//ressources mémoire similaires avec la même valeur à l'objet.
	for (int i = 0; i < 100; i++)
		this->ideas[i] = op.ideas[i];
	return (*this);
}