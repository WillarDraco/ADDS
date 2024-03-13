#include "Truckloads.h"
#include <iostream>

Truckloads::Truckloads() {
}

Truckloads::~Truckloads() {
}

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= loadSize) {
        return 1;
    } else if (numCrates % 2 == 0) {
        return (numCrates/2, loadSize);
    } else {
        return (numCrates/2, loadSize) + ((numCrates + 1) / 2, loadSize);
    }
}
