#include <iostream>
#include <string>
#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main(void) {
    Referee One;
    Human human;
    Computer computer;

    Player* Winner = One.refGame(&human, &computer);
    if (Winner == nullptr) {
        std::cout << "Tie" << std::endl;
    } else {
        std::cout << Winner->getName() << std::endl;
    }   
}