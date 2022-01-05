#include "phonebook.hpp"

void    Contact::fill_phonebook(int i)
{
    std::cout << "  " << i << "  " << "|";
    fill_phonebook2(this->first_name);
    fill_phonebook2(this->last_name);
    fill_phonebook2(this->nickname);
    std::cout << std::endl;
}

void    fill_phonebook2(std::string str)
{
    int space;

    space = 0;
    if (str.length() == 10)
        std::cout << str << "|";
    else if (str.length() < 10)
    {
        space = 10 - str.length(); 
        while (space != 0)
        {
            std::cout << " ";
            space--;
        }
        std::cout << str << "|";
    }
    else
        std::cout << str.substr(0, 9) << ".|";
}

void contact_list(Contact *contact)
{
    int i;
    std::string index;

    i = 0;
    if (contact[0].get_first_name().empty())
    {
        std::cout << "No contact in your phonebook." << std::endl;
        return ;
    }
    std::cout << "---------------------------------------" << std::endl;
    std::cout << "Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "---------------------------------------" << std::endl;
    while (i < 8 && !contact[i].get_first_name().empty())
    {
        contact[i].fill_phonebook(i);
        std::cout << "--------------------------------------" << std::endl;
        i++;
    }
    i--;
    display_one_contact(contact, i);
}

void    display_one_contact(Contact *contact, int i)
{
	std::size_t found;
    std::string index;
    int index_int;

    found = 0;
    index_int = 0;
    std::cout << "which contact do you want to display ? if you don't want to see a contact, write 'NONE'. Enter the index : ";
    std::getline(std::cin, index);
    if (index.compare("NONE") == 0)
        return ;
    found = index.find_first_not_of("012345678");
    if (found != std::string::npos)
    {
        std::cout << "Must be only numbers, try again !" << std::endl;
        return ;
    }
    index_int = index[0] - 48;
    if (index.length() != 1 || index_int > i)
    {
        std::cout << "Index does not exist, try again !" << std::endl;
        return ;
    }
    contact[index_int].one_contact();
}

void    Contact::one_contact(void)
{
    std::cout << this->first_name << std::endl;
    std::cout << this->last_name << std::endl;
    std::cout << this->nickname << std::endl;
    std::cout << this->phone_number << std::endl;
    std::cout << this->darkest_secret << std::endl;
}

Contact    add_contact(Contact contact)
{
    contact.set_first_name();
    contact.set_last_name();
    contact.set_nickname();
    contact.set_phone_number();
    contact.set_darkest_secret();
    std::cout << "Your contact has been added successfully !" << std::endl;
    return (contact);
}

void full_phonebook(Contact *contact,int *i)
{
    std::string delete_contact;
    int delete_contact_int;

    std::cout << "Phonebook full. Which contact do you want to replace? if you don't want to replace a contact, write 'NONE'. Enter the index : ";
    std::getline(std::cin, delete_contact);
    if (delete_contact.compare("NONE") == 0)
        return ;
    delete_contact_int = delete_contact[0] - 48;
    if (delete_contact.length() != 1 || delete_contact_int > *i - 1)
    {
        std::cout << "Index does not exist, try again !" << std::endl;
        full_phonebook(contact, i);
    }
    else 
        contact[delete_contact_int] = add_contact(contact[delete_contact_int]);
}

int main(int ac, char **av)
{
    (void)av;
    std::string action_asked;
    int i;
    Contact num[9];
  
    i = 0;
    Contact();
    if (ac == 1)
        std::cout << "How can I help you ? Enter ADD, SEARCH or EXIT" << std::endl;
	else
	{
		std::cout << "Too much arguments" << std::endl;
		return 0;
	}
    while (std::getline(std::cin, action_asked))
    {
        if (action_asked.compare("ADD") == 0)
        {
            if (i >= 8)
                full_phonebook(num, &i);
            else
            {
                num[i] = add_contact(num[i]);
                i++;
            }
        }
        else if (action_asked.compare("SEARCH") == 0)
            contact_list(num);
        else if (action_asked.compare("EXIT") == 0)
            break ;
        else
            std::cout << "Wrong command : Enter ADD, SEARCH or EXIT" << std::endl;
        std::cout << "How can I help you ? Enter ADD, SEARCH or EXIT" << std::endl;
    }
    std::cout << "Bye" << std::endl;
    return 0;
}
