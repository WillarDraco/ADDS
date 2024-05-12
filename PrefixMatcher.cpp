#include "PrefixMatcher.h"
#include <vector>
#include <iostream>
#include <queue>

PrefixMatcher::PrefixMatcher() {
    root = new TriePrefix;
}

int PrefixMatcher::selectRouter(std::string networkAddress) {
    TriePrefix* look = root;

    for (int i = 0; i < networkAddress.length(); i++) {
        int digitCheck = networkAddress[i] - '0';
        if (look->getIP()[digitCheck] == nullptr) {
            return look->getRouterNum();
        }
        look = look->getIP()[digitCheck];
    }

    std::queue<TriePrefix*> future;
    future.push(look);
    int router = -1;

    while (!future.empty()) {
        TriePrefix* current = future.front();
        future.pop();

        if (current->getRouterNum() != -1) {
            router = current->getRouterNum();
        }

        if (current->getIP()[0] != nullptr) {
            future.push(current->getIP()[0]);
        }

        if (current->getIP()[1] != nullptr) {
            future.push(current->getIP()[1]);
        }
    }
    return router;
}

void PrefixMatcher::insert(std::string address, int routerNumber) {
    TriePrefix* look = root;

    for (int i = 0; i < address.length(); i++) {
        int digitCheck = address[i] - '0';
        if (look->getIP()[digitCheck] == nullptr) {
            look->getIP()[digitCheck] = new TriePrefix;
        }
        look = look->getIP()[digitCheck];
    }

    look->setRouterNum(routerNumber);
}