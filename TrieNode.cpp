#include "TrieNode.h"

TrieNode::TrieNode() {
    word = false;
}

void TrieNode::setWord(bool word) {
    this->word = word;
}

bool TrieNode::getWord() {
    return word;
}

std::vector<TrieNode*> TrieNode::getLetters() {
    return *letters;
}