// cpp-py.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <thread>
#include <chrono>
#include "variables.h"

int main() 
{
	
	std::cout << "Enter a Python file: " << filename << std::endl;

	if(reader::checkFileEnding(filename, ".py")) std::cout << "Python file" << std::endl;

	// [WIP] include check that if not python file, then exit
	else 
	{ 
		std::cout << "Not a Python file\n";
	}



	std::fstream pyFile;
	pyFile.open(filename, std::ios::in);

	if (pyFile.is_open())
	{
		std::string read{};
		while(std::getline(pyFile, read)) {
			lines.push_back(read);
		
		}

	}	

		std::cout << "Generating Code.";
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
		std::cout << ".";
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
		std::cout << ".";

		//
		std::this_thread::sleep_for(std::chrono::seconds(1));
		system("CLS");

		std::cout << "\n#include <iostream>\n\n";

		std::cout << "int main() {\n";
		//

	for (int i = 0; i < lines.size(); i++) {
		
		if (commentCheck::checkIfComment(lines[i]))
		{
			std::cout << "//" << commentCheck::ifCommentThenConvert((lines[i]), (commentCheck::checkIfComment(lines[i]))) << "\n";
		}

		else if (checkIfPrintStatement::ifPrintStatementTrueExecuteStdCout(
			(lines[i]), 
			(checkIfPrintStatement::checkIfPrintStatementTrue(lines[i]))) 
			== printStatementChecker)
		{
			continue;
		}





		else {
			std::cout << "std::cout << " << checkIfPrintStatement::ifPrintStatementTrueExecuteStdCout(
				lines[i], 
				checkIfPrintStatement::checkIfPrintStatementTrue(lines[i])) 
			<< " << std::endl;" << std::endl;
		}

	
	}
		std::cout << "}\n";
	return 0;
}