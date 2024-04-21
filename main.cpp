#include <iostream>
#include <vector>
#include "BubbleSort.h"
#include "Sort.h"

int main(void) {
    std::vector<int> test = {1, 5, 8, 2, 3, 1};
    BubbleSort run;
    std::vector<int> sorted = run.sort(test);

    for (int i = 0; i < sorted.size(); i++) {
        std::cout << sorted[i] << " ";
    }
    std::cout << std::endl;
}