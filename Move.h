#ifndef MOVE_H
#define MOVE_H

#include <string>
#include <unordered_set>


class Move{
    protected:
        std::unordered_set<std::string> wins;
        std::string name;
    public:
        virtual std::string getName() = 0;
        virtual std::unordered_set<std::string> getWins() = 0;
};
#endif