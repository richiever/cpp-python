// cpp-py.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "reader.h"
#include "checkIfPrintStatement.h"
#include <vector>

int main() 
{
	std::vector<std::string> lines{};
	const std::string filename{ read_file() };
	std::string CppFileName{ "" };
	std::cout << filename << std::endl;
	const std::string printStatementChecker{ "not a print statement"};

	if(checkFileEnding(filename, ".py")) std::cout << "Python file" << std::endl;

	// include check that if not python file, then exit
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

		std::cout << "\n#include <iostream>\n\n";

		std::cout << "int main() {\n";

	for (int i = 0; i < lines.size(); i++) {
		

		if(ifPrintStatementTrueExecuteStdCout(lines[i], checkIfPrintStatementTrue(lines[i])) == printStatementChecker) continue;
		else std::cout << "std::cout << " << ifPrintStatementTrueExecuteStdCout(lines[i], checkIfPrintStatementTrue(lines[i])) << " << std::endl;" << std::endl;
		

	
	}
		std::cout << "}\n";
	return 0;
}