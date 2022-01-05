#include <iostream>
#include <string>
#include <fstream>

std::string replace_str(std::string line, std::string s1, std::string s2, int i)
{
	int j = 0;
	std::string subline = line;
	std::string rest;
	while (line[i])
	{
		j = 0;
		while(line[i + j] && s1[j] && line[i + j] == s1[j])
		{
			if (s1[j + 1] == '\0')
			{
				rest.clear();
				subline = line.substr(0, i);
				subline += s2;
				rest.append(&line[i + s1.length()]);
				subline += rest;
				return (replace_str(subline, s1, s2, i));
			}
			j++;
		}
		i++;
	}
	return (subline);
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Bad number of arguments" << std::endl;
		return (0);
	}
	else 
	{
		std::string s1 = av[2];
		std::string s2 = av[3];
		if (s1.empty() || s2.empty())
		{
			std::cout << "Error: arg1 and arg2 must not be empty" << std::endl;
			return (1);
		}
		std::string filereplace = av[1];
		filereplace +=  ".replace";
		std::string line;
		std::ifstream filename;
		std::ofstream fileReplaced;
		filename.open (av[1]);
		if (filename.is_open())
		{
			std::ofstream fileReplaced;
			fileReplaced.open(filereplace);
			while(std::getline(filename, line))
				fileReplaced << replace_str(line, s1, s2, 0) << std::endl;
			filename.close();
			fileReplaced.close();
		}
		else
		{
			std::cout << "Imposible to open file" << std::endl;
			return (1);
		}
	}
	return (0);
}