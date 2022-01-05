#include "Base.hpp"

Base * generate(void)
{
	std::srand(std::time(NULL));
	switch (rand() % 3 + 1)
	{
		case 1: 
		{
			Base *a = new A;
			return a; 
		}
		case 2: 
		{
			Base *b = new B;
			return b; 
		}
		case 3: 
		{
			Base *c = new C;
			return c; 
		}
	}
	return (NULL);
}

void identify(Base *p)
{
	std::cout << "Ptr " << std::endl;
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
	else
		std::cout << "Type unknow" << std::endl;
}

void identify (Base & p)
{
	std::cout << "Ref " << std::endl;
	try {
		A& a= dynamic_cast<A&>(p);
		(void) a;
		std::cout << "A" << std::endl;
	} catch (std::exception& e) {
		e.what();
	}
	try {
		B& b=dynamic_cast<B&>(p);
		(void) b;
		std::cout << "B" << std::endl;
	} catch (std::exception& e) {
		e.what();

	}
	try {
		C& c=dynamic_cast<C&>(p);
		(void) c;
		std::cout << "C" << std::endl;
	} catch (std::exception& e) {
		e.what();

	}
}