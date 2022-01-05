#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Intern  someRandomIntern;
	Form*   rrf = NULL;
	Bureaucrat bur1("bur1", 1);
	Bureaucrat bur2("bur1", 150);

	try {
		rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Bender");
		rrf->beSigned(bur1);
		bur1.signForm(*rrf);
		rrf->execute(bur1);
		delete rrf;

	} 
	catch (std::exception& e)
	{
		if (rrf != NULL)
			delete rrf;
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	rrf = NULL;
	try {
		rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
		rrf->beSigned(bur1);
		rrf->beSigned(bur2);
		rrf->execute(bur1);
		rrf->execute(bur2);
		delete rrf;

	} 
	catch (std::exception& e) 
	{
		if (rrf != NULL)
			delete rrf;
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	rrf = NULL;
	try {
		rrf = someRandomIntern.makeForm("PresidentialPardonForm", "Bender");
		rrf->beSigned(bur1);
		rrf->execute(bur1);
		rrf->execute(bur2);
		delete rrf;

	} 
	catch (std::exception& e) 
	{
		if (rrf != NULL)
			delete rrf;
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	rrf = NULL;
	try {
		rrf = someRandomIntern.makeForm("unknow", "Bender");
		rrf->beSigned(bur1);
		rrf->execute(bur1);
		rrf->execute(bur2);
		delete rrf;

	} 
	catch (std::exception& e) 
	{
		if (rrf != NULL)
			delete rrf;
		std::cout << e.what() << std::endl;
	}
}