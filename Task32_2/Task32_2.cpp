#include <iostream>
#include<string>
#include<fstream>
#include"nlohmann/json.hpp"

int main()
{
	std::ifstream file("C:/Skilbox/Task32_2/Task32_2/film.json");
	if (!file.is_open())
	{
		std::cout << "not";
	}
	else 
	{
		nlohmann::json o;
		file >> o;
		std::string name;

		std::getline(std::cin , name);
		for (auto& el : o.items()) 
		{
			if (o[el.key()]["Actors"] == name)
			{
				std::cout << el.key() << std::endl;
			}			
		}
	}
	return 0;
}
