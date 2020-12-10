#include <string>
#include <sstream>
#include <iostream>


std::string to_string(int num) {
    std::stringstream ss;
    ss << num;
    std::string str;
    ss >> str;
    return str;
}