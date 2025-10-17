#include "../include/function.h"


std::string delete_vowels(const std::string input){
    const char vowels[13] = {'a','e','y','u','i','o','A','E','Y','U','I','O'};
    std::string new_str{};

    for (char letter : input){
        bool isVowel = false;
        for (char vowel : vowels){
            if (letter == vowel){
                isVowel = true;
                break;
            }
        }
        if (isVowel == false) {
            new_str += letter;
        }
    }

    return new_str;
}
