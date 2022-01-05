#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	const unsigned int size = 14;
	const Animal* tab[size];
	unsigned int index = 0;
	Cat basic;
	{
		Cat tmp = basic;
		std::cout << tmp.getBrain() << std::endl << std::endl;
	}
	std::cout << basic.getBrain() << std::endl << std::endl;

	Cat p;
	Dog m;
	while (index < size)
	{
		if (index % 2  == 0)
			tab[index] = new Cat(p);
		else
			tab[index] = new Dog(m);
		index++;
	}
	index = 0;
	while (index < size)
	{
		std::cout << index << " : " << tab[index]->getType() << std::endl;
		index++;
	}
	index = 0;
	while (index < size)
	{
		delete tab[index];
		index++;
	}

	delete cat;
	delete dog;
}
