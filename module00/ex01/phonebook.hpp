#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>

class Contact
{
    public:
        Contact(void);
        ~Contact(void);
        void set_first_name(void);
        void set_last_name(void);
        void set_nickname(void);
        void set_phone_number(void);
        void set_darkest_secret(void);
        std::string get_first_name(void) const;
        std::string get_last_name(void) const;
        std::string get_nickname(void) const;
        std::string get_phone_number(void) const;
        std::string get_darkest_secret(void) const;
        void fill_phonebook(int i);
        void one_contact(void);
   
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
};

void full_phonebook(Contact contact, int *i);
Contact add_contact(Contact contact);
void contact_list(Contact *contact);
void    fill_phonebook2(std::string str);
void display_one_contact(Contact *contact, int i);

#endif