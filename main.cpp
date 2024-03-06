#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Move.h"
#include "Referee.h"
#include <string>
#include <iostream>

int main(void) {
    Referee ref;
    Human p1;
    Computer p2;

    Player* winner = ref.refGame(&p1, &p2);
    if(winner->getName() == "Computer") {
        std::cout << "Computer wins" << std::endl;
    }
}