#include <iostream>

#include <fstream>

#include <conio.h>

#include <stdio.h>

#include "reader.h"

std::string read_file() 
{
	std::cout << "Enter the name of the file you want to read: ";
	std::string filename{};
	std::cin >> filename;
	return filename;
}

bool checkFileEnding(const std::string& text, const std::string& ending)
{
	if (text.length() < ending.length()) return false;
	return (0 == text.compare(text.length() - ending.length(), ending.length(), ending));
}