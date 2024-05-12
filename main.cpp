#include "Autocomplete.h"
#include <iostream>

int main(void) {
    Autocomplete test;
    test.insert("hello");
    test.insert("helli");
    std::vector<std::string> words = test.getSuggestions("hel");

    for (int i = 0; i < words.size(); i++) {
        std::cout << words[i] << std::endl;
    }
}