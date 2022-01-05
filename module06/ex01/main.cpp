#include "Serialization.hpp"

int main()
{
	Data *data = new Data;

	std::cout << sizeof(*data) << std::endl;
	std::cout << "Address data: " << data << std::endl;
	std::cout << "Ptr : " << serialize(data) << std::endl;
	std::cout << "Address data: " << deserialize(serialize(data)) << std::endl;

	delete data;

	return (0);
}