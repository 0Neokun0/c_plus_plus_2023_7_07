/*
Hello
olleH
*/
#include <iostream>
#include <algorithm>
#include <string>

int main() {
    std::string str{};
    getline(std::cin, str);
    
    std::reverse(str.begin(), str.end());
    
    std::cout << str << std::endl;
    
    return 0;
}