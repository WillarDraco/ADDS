#include <iostream>
#include <vector>
#include "BubbleSort.h"

std::vector<int> BubbleSort::sort(std::vector<int> list) {
    int length = list.size();
    for (int i = 0; i < length - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < length - i - 1; j++) {
            if (list[j] > list[j + 1]) {
                int temp = list[j + 1];
                list[j + 1] = list[j];
                list[j] = temp;
                swapped = true;
            }   
        }
        
        if (swapped == false) {
                break;
        }
    }
    return list;
}