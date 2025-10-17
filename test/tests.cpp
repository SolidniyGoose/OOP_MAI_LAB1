#include "../include/function.h"
#include <gtest/gtest.h>

TEST(DeleteVowelsTest, SimpleCase) {
    std::string result = delete_vowels("Hello World");
    EXPECT_EQ(result, "Hll Wrld");
}

TEST(DeleteVowelsTest, OnlyVowels) {
    std::string result = delete_vowels("aeiouyAEIOUY");
    EXPECT_EQ(result, "");
}

TEST(DeleteVowelsTest, NoVowels) {
    std::string result = delete_vowels("bcdfghjklnm");
    EXPECT_EQ(result, "bcdfghjklnm");
}

TEST(DeleteVowelsTest, MixedCase) {
    std::string result = delete_vowels("Programming");
    EXPECT_EQ(result, "Prgrmmng");
}

TEST(DeleteVowelsTest, EmptyString) {
    std::string result = delete_vowels("");
    EXPECT_EQ(result, "");
}

TEST(DeleteVowelsTest, WithSpacesAndPunctuation) {
    std::string result = delete_vowels("Hello, World!");
    EXPECT_EQ(result, "Hll, Wrld!");
}