#include "string_utils.h"
#include <cctype>

std::string toUpper(const std::string &s)
{
    std::string result = s;
    for (int i = 0; i < result.length(); i++)
    {
        result[i] = toupper(static_cast<unsigned char>(result[i]));
    }
    return result;
}

std::string toLower(const std::string &s)
{
    std::string result = s;
    for (int i = 0; i < result.length(); i++)
    {
        result[i] = tolower(static_cast<unsigned char>(result[i]));
    }
    return result;
}