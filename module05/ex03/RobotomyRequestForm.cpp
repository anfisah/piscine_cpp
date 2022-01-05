#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : Form("RobotomyRequestForm", 25, 5)
{
	*this = src;
}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	this->_target = rhs._target;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::cout << "BRRR BRRRR BRRRR" << std::endl;
	std::srand(std::time(NULL));	
	for (int i = 0; i < 5; i++)
	{
		if (rand() % 2 == 0)
			std::cout << this->_target << " has been robotomized successfully" << std::endl;
		else 
			std::cout << this->_target << " is a failure" << std::endl;
	}
}
