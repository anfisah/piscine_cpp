#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	Bureaucrat	bur1("bur1", 1);
	Bureaucrat	bur2("bur2", 150);

	try {
		ShrubberyCreationForm test1("maison");
		bur1.signForm(test1);
		bur2.signForm(test1);
		bur1.executeForm(test1);
		test1.execute(bur1);
		test1.execute(bur2);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		PresidentialPardonForm test2("garage");
		bur1.signForm(test2);
		bur2.signForm(test2);
		bur1.executeForm(test2);
		test2.execute(bur1);
		test2.execute(bur2);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		RobotomyRequestForm test3("jardin");
		bur1.signForm(test3);
		bur2.signForm(test3);
		bur1.executeForm(test3);
		test3.execute(bur1);
		test3.execute(bur2);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}