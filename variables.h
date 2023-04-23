#include "pch.h"
#include "reader.h"
#include "checkIfPrintStatement.h"
#include "commentCheck.h"
#include <vector>


	std::vector<std::string> lines{};
	const std::string filename{ reader::read_file() };
	std::string CppFileName{ "" };
const std::string printStatementChecker{ "not a print statement" };
const std::string commentStatementChecker{ "not a comment" };