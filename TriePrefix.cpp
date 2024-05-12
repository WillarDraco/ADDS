#include "TriePrefix.h"

TriePrefix::TriePrefix() {
    IP.resize(2, nullptr);
    routerNum = -1;
}

void TriePrefix::setRouterNum(int num) {
    routerNum = num;
}

std::vector<TriePrefix*>& TriePrefix::getIP() {
    return IP;
}

int TriePrefix::getRouterNum() {
    return routerNum;
}