#ifndef TRIEPREFIX_H
#define TRIEPREFIX_H

#include <vector>

class TriePrefix {
    private:
        int routerNum;
        std::vector<TriePrefix*> IP;
    public:
        TriePrefix();
        void setRouterNum(int num);
        std::vector<TriePrefix*>& getIP();
        int getRouterNum();
};
#endif