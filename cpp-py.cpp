// cpp-py.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "reader.h"

int main() 
{
	std::string filename{ read_file() };
	std::cout << filename << std::endl;

	if(checkFileEnding(filename, ".py")) std::cout << "Python file" << std::endl;
	else std::cout << "Not a Python file" << std::endl;

	std::fstream pyFile;
	pyFile.open(filename, std::ios::in);

	if (pyFile.is_open())
	{
		std::string read{};
		while(std::getline(pyFile, read)) {
			std::cout << read;
		
		}

	}

	return 0;
}