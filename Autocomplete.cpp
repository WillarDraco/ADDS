#include "Autocomplete.h"
#include <vector>
#include <iostream>
#include <queue>

Autocomplete::Autocomplete() {
    root = new TrieNode;
}

std::vector<std::string> Autocomplete::getSuggestions(std::string partialWord) {
    TrieNode* look = root;
    std::vector<std::string> suggestions;

    for (char c : partialWord) {
        int character = c - 'a';
        if (look->getLetters()[character] == nullptr) {
            return suggestions;
        }
        look = look->getLetters()[c - 'a'];
    }

    std::queue<std::pair<TrieNode*, std::string>> future;
    future.push({look, partialWord});

    while (!future.empty()) {
        std::pair<TrieNode*, std::string> currentPair = future.front();
        future.pop();
        look = currentPair.first;
        std::string newWord = currentPair.second;

        if (look->getWord() == true) {
            suggestions.push_back(newWord);
        }

        for (int i = 0; i < 26; i++) {
            if (look->getLetters()[i] != nullptr) {
                future.push({look->getLetters()[i], newWord + (char) (i + 'a')});
            }
        }
    }

    return suggestions;
}

void Autocomplete::insert(std::string word) {
    TrieNode* look = root;

    for (int i = 0; i < word.length(); i++) {
        int letter = word[i] - 'a';
        TrieNode* newLetter = new TrieNode();
        look->getLetters()[letter] = newLetter;
        look = look->getLetters()[letter];
    }

    look->setWord(true);
}