#include "phonebook.hpp"

Contact::Contact(void)
{
    return ;
}

Contact::~Contact(void)
{
    return ;
}

void	Contact::set_first_name(void)
{
	std::cout << "First name : ";
	std::getline(std::cin, this->first_name);
	if (this->first_name.empty())
	{
		std::cout << "You must write something" << std::endl;
		set_first_name();
	}
}

void	Contact::set_last_name(void)
{
	std::cout << "Last name : ";
	std::getline(std::cin, this->last_name);
	if (this->last_name.empty())
	{
		std::cout << "You must write something" << std::endl;
		set_last_name();
	}
}

void	Contact::set_nickname(void)
{
	std::cout << "Nickname: ";
    std::getline(std::cin, this->nickname);
	if (this->nickname.empty())
	{
		std::cout << "You must write something." << std::endl;
		set_nickname();
	}
}

void	Contact::set_phone_number(void)
{
	std::size_t found;

	std::cout << "Phone number: ";
	std::getline(std::cin, this->phone_number);
	found = this->phone_number.find_first_not_of("0123456789 ");
	if (this->phone_number.empty())
	{
		std::cout << "You must write something." << std::endl;
		set_phone_number();
	}
	if (found != std::string::npos)
	{
		std::cout << "Must be only numbers, try again !" << std::endl;
		set_phone_number();
	}
}

void	Contact::set_darkest_secret(void)
{
	std::cout << "Darknest secret : ";
	std::getline(std::cin, this->darkest_secret);
	if (this->darkest_secret.empty())
	{
		std::cout << "You must write something." << std::endl;
		set_darkest_secret();
	}
}

std::string Contact::get_first_name(void) const
{
	return (this->first_name);
}

std::string Contact::get_last_name(void) const
{
	return (this->last_name);
}

std::string Contact::get_nickname(void) const
{
	return (this->nickname);
}

std::string Contact::get_phone_number(void) const
{
	return (this->phone_number);
}

std::string Contact::get_darkest_secret(void) const
{
	return (this->darkest_secret);
}
