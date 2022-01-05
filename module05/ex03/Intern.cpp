#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


Intern::Intern(void)
{
	return ;
}

Intern::~Intern(void)
{
	return ;
}

Intern::Intern(const Intern &src)
{
	*this = src;
}

Intern &Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	return *this;
}

Form*	Intern::makeForm(std::string nameForm, std::string target)
{
	Form *form = NULL;
	Form *forms[3];

	forms[0] = new PresidentialPardonForm(target);
	forms[1] = new RobotomyRequestForm(target);
	forms[2] = new ShrubberyCreationForm(target);
	for (int i = 0; i < 3; i++) 
	{
		if (forms[i]->getName() == nameForm)
			form = forms[i];
		else 
			delete forms[i];
	}
	if (form)
		std::cout << "Intern creates " << nameForm << std::endl;
	else
		throw formUnknow();
	return form;
}