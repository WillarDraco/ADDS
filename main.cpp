#include <iostream>
#include <string>
#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main(void) {
    Referee One;
    Human human1;
    Human human2;

    Player* Winner = One.refGame(&human1, &human2);
    if (Winner == nullptr) {
        std::cout << "Tie" << std::endl;
    } else {
        std::cout << Winner->getName() << std::endl;
    }   
}