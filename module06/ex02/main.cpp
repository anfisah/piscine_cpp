#include "Base.hpp"

int main(void)
{
	Base *basePtr = generate();

	identify(basePtr);
	identify(*basePtr);
	delete basePtr;

	return 0;
}