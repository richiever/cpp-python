#include "CommentCheck.h"

bool commentCheck::checkIfComment(const std::string& strToCheck)
{	
	if (strToCheck[0] == '#')
	{
		return true;
	}
	else
	{
		return false;
	}
}

std::string commentCheck::ifCommentThenConvert(const std::string& strToCheck, const bool& CheckIfComment)
{
	if (CheckIfComment)
	{
		return strToCheck.substr(1, strToCheck.length() - 1);
	}
	else
	{
		return "not a comment";
	}
}
