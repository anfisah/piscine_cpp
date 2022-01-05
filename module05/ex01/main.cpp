#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
try
	{
		Form form1("form1", 30, 60);
		std::cout << form1 << std::endl;
		Bureaucrat Lea("Lea", 10);
		std::cout << Lea << std::endl;
		form1.beSigned(Lea);
		Lea.signForm(form1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-----------------" << std::endl;
	
	try
	{
		Form form2("form2", 30, 60);
		std::cout << form2 << std::endl;
		Bureaucrat Lea("Lea", 34);
		std::cout << Lea << std::endl;
		form2.beSigned(Lea);
		Lea.signForm(form2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-----------------" << std::endl;

	try
	{
		Form form3("form3", 30, 60);
		std::cout << form3 << std::endl;
		Bureaucrat Lea("Lea", 30);
		std::cout << Lea << std::endl;
		form3.beSigned(Lea);
		Lea.signForm(form3);
		for(int i = 0; i < 20; i++)
			Lea.IncrementGrade();
		std::cout << Lea << std::endl;
		form3.beSigned(Lea);
		Lea.signForm(form3);
		std::cout << form3 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}