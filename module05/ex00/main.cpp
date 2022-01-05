#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat test1("test1", 22);
		
		std::cout << test1.getGrade() << " " << test1.getName() << std::endl;
		test1.IncrementGrade();
		std::cout << test1 << std::endl;
		test1.DecrementGrade();
		std::cout << test1 << std::endl;

		Bureaucrat test2("test2", 1);

		std::cout << test2 << std::endl;
		test2.IncrementGrade();

		Bureaucrat test3("test3", 150);

		std::cout << test3 << std::endl;
		test3.DecrementGrade();

	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "-----------------" << std::endl;
	
	try
	{
		Bureaucrat test4("test4", 150);

		std::cout << test4 << std::endl;
		test4.DecrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}