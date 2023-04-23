#pragma once
#include "pch.h"

namespace reader {
	std::string read_file();
	bool checkFileEnding(const std::string& text, const std::string& ending);
}

