#ifndef SERIALISATION_HPP
#define SERIALISATION_HPP

#include <iostream>
#include <string>

typedef struct s_Data
{
	std::string value;

}	Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);


#endif