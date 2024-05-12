#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H

#include "TrieNode.h"
#include <string>

class Autocomplete {
    private:
        TrieNode* root;
    public:
        Autocomplete();
        std::vector<std::string> getSuggestions(std::string partialWord);
        void insert(std::string word);
};
#endif