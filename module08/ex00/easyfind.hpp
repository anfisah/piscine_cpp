#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>


class NotFound : public std::exception
{
	const char* what() const throw()
	{
		return "Occurence not found !";
	}
};


template<typename T>
void easyfind(T temp, int i)
{
	std::vector<int>::iterator it = std::find(temp.begin(), temp.end(), i);

	if (it == temp.end())
		throw NotFound();

	std::cout << *it << " at the index : " << std::distance(temp.begin(), it) << std::endl;
}

#endif 