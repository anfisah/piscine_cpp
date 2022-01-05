#include "Karen.hpp"

Karen::Karen(void) {};

Karen::~Karen(void) {};

void Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"
	<< std::endl << std::endl;
}

void Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!"
	<< std::endl << std::endl;

}

void Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month."
	<< std::endl << std::endl;
}

void Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now."
	<< std::endl << std::endl;
}

void Karen::complain(std::string level)
{
	char lev = 0;

	if (level == "DEBUG")
		lev = 'D';
	else if (level == "INFO")
		lev = 'I';
	else if (level == "WARNING")
		lev = 'W';
	else if (level == "ERROR")
		lev = 'E';

	switch(lev)
	{
		case 'D': debug();
		case 'I': info();
		case 'W': warning();
		case 'E': error(); break ;
		default : std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}

}
