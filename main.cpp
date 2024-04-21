#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include "Sort.h"

int main(void) {
    std::vector<int> list = {};
    std::string line;
    std::getline(std::cin, line);
    std::stringstream ss(line);

    int i;

    while (ss >> i) {
        list.push_back(i);
    }

    QuickSort quick;
    std::vector<int> sorted = quick.sort(list);

    RecursiveBinarySearch binarySearch;
    bool found = binarySearch.search(sorted, 1);
    
    if (found == true) {
        std::cout << "true" << " ";
    } else {
        std::cout << "false" << " ";
    }

    for (int i = 0; i < sorted.size(); i++) {
        std::cout << sorted[i] << " ";
    }
    
    std::cout << std::endl;
}