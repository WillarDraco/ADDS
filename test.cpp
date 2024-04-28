#include <iostream>
#include <vector>
#include <limits>
#include "Node.h"
#include "LinkedList.h"

int main(void) {
    int array[4] = {5,2,7,10};
    
    LinkedList test(array, 4);
    test.insertPosition(3, 9);
    test.printList();
}