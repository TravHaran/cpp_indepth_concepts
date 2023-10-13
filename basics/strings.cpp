/*
This program is about strings
*/

#include <iostream>
int main() {
    std::string s  = "hello world"; // double quotes for strings
    std::cout << s << std::endl;
    char c = s[0];
    std::cout << c << std::endl;
    int stringLen = s.length();
    std::cout << stringLen << std::endl;
    int lastPos = stringLen - 1;
    s[lastPos] = 't';
    std::cout << s << std::endl;
    std::cout << stringLen << std::endl;
    s += " again";
    std::cout << s << std::endl;
    return 0;
}