#include "Span.hpp"

int main()
{
	Span spa = Span(5);

	try {
		spa.addNumber(5);
		spa.addNumber(3);
		spa.addNumber(17);
		spa.addNumber(9);
		spa.addNumber(11);
		std::cout << spa.shortestSpan() << std::endl;
		std::cout << spa.longestSpan() << std::endl;
		spa.addNumber(20);
	} catch (std::exception &e) {
		std::cout << e.what() <<std::endl;
	}

 	std::cout << "--------------" << std::endl;

	Span a = Span(1);

	try {
		std::cout << a.shortestSpan() << std::endl;
		std::cout << a.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() <<std::endl;
	}

 	std::cout << "--------------" << std::endl;

	try {
		spa.addNumber(5);
		std::cout << a.shortestSpan() << std::endl;
		std::cout << a.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() <<std::endl;
	}

 	std::cout << "--------------" << std::endl;

	srand (time(NULL));
	Span sp = Span(20000);

	try {
		for (int i = 0; i < 15000; i++)
			sp.addNumber(rand () % 100000);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() <<std::endl;
	}
}	
