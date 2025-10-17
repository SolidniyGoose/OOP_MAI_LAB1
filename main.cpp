#include <iostream>
#include "include/function.h"

int main(){
    std::string input;
    std::string result{};

    std::getline(std::cin, input);

    result = delete_vowels(input);
    
    std::cout << "New string: " << result << std::endl;

    return 0;
}