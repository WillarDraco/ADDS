#include <iostream>
#include "DocumentManager.h"
#include "Document.h"

int main(void) {
    DocumentManager test;
    test.addDocument("test1", 1, 1);
    test.addDocument("test2", 2, 1);
    test.addDocument("test3", 3, 1);
    test.addDocument("test4", 4, 1);
    test.addPatron(1);
    std::cout << test.borrowDocument(1,1) << "" << test.borrowDocument(2,1) << std::endl;
}