#include "pch.h"
#include <vector>

namespace VariableTypeChecker
{

	

	

	


	// Check if variable has been declared yet
	
	bool checkIfVariablesDeclared(std::vector<std::string>VarData);

	// Find Variable, get it's name and store it inside of a vector which we can iterate through later to determine if a variable has been declared yet(only if it has not been declared)

	std::vector <std::string>CreateNewVariableVectorDataset(bool checkIfVariablesDeclared, std::vector<std::string>VarData);

	// if variable has not been declared yet, declare it, create a new variable, find = and turn it into e.g: int x{ 5 };

	std::string CreateNewVariable(std::vector<std::string>VarData);

	// if variable has been declared, find = and change it's value(if variable changes type, also static_cast it

	std::string ChangePriorVariable(std::vector<std::string>VarData);


}