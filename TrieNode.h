#ifndef TRIENODE_H
#define TRIENODE_H

#include <vector>

class TrieNode {
    private:
        bool word;
        std::vector<TrieNode*> letters[26];
    public:
        TrieNode();
        void setWord(bool word);
        std::vector<TrieNode*> getLetters();
        bool getWord();
};
#endif