#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	if (!mstack.empty())
	{
		std::cout << "Not empty !" << std::endl;
	}
	mstack.push(0);
	MutantStack<int>::it it = mstack.begin();
	MutantStack<int>::it ite = mstack.end();

	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);

	std::cout << "-------------" << std::endl;

	std::list<int> lstack;

	lstack.push_back(5);
	lstack.push_back(17);
	std::cout << lstack.back() << std::endl;
	lstack.pop_back();
	std::cout << lstack.size() << std::endl;
	lstack.push_back(3);
	lstack.push_back(5);
	lstack.push_back(737);
	if (!lstack.empty())
	{
		std::cout << "Not empty !" << std::endl;
	}
	lstack.push_back(0);
	std::list<int>::iterator iterat = lstack.begin();
	std::list<int>::iterator iterato = lstack.end();

	while (iterat != iterato)
	{
	std::cout << *iterat << std::endl;
	++iterat;
	}

	return 0;
}