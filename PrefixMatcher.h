#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H

#include "TriePrefix.h"
#include <string>

class PrefixMatcher {
    private:
        TriePrefix* root;
    public:
        PrefixMatcher();
        int selectRouter(std::string networkAddress);
        void insert(std::string address, int routerNumber);
};
#endif