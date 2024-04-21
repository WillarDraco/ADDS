#include <iostream>
#include <vector>
#include "QuickSort.h"

std::vector<int> QuickSort::sort(std::vector<int> list) {
    int length = list.size();
    
    if (length < 2) {
        return list;
    }

    int pivotIndex = 0;

    if (length == 2) {
        pivotIndex = 0;
    } else {
        pivotIndex = 2;
    }
    
    int pivot = list[pivotIndex];

    std::vector<int> left;
    std::vector<int> right;

    for (int i = 0; i < length; i++) {
        if (i == pivotIndex) {
            continue;
        }

        if (list[i] <= pivot) {
            left.push_back(list[i]);
        } else {
            right.push_back(list[i]);
        }
    }

    std::vector<int> sortedLeft = sort(left);
    std::vector<int> sortedRight = sort(right);

    sortedLeft.push_back(pivot);
    sortedLeft.insert(sortedLeft.end(), sortedRight.begin(), sortedRight.end());

    return sortedLeft;
}