#include "checkIfPrintStatement.h"

#include "pch.h"

bool checkIfPrintStatement::checkIfPrintStatementTrue(const std::string& strToCheck)
{
	std::string prefix = "print(";

	if (strToCheck.find(prefix, 0) == 0) return true;
	else return false;
}

std::string checkIfPrintStatement::ifPrintStatementTrueExecuteStdCout(const std::string& strToCheck, const bool& check)
{
	if (check) 
	{
		return strToCheck.substr(6, strToCheck.length() - 7);
	}
	return "not a print statement";
}