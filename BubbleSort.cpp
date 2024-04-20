#include <iostream>
#include <vector>
#include "BubbleSort.h"

std::vector<int> BubbleSort::sort(std::vector<int> list) {
    int length = list.size();
    for (int i = 0; i < length - 1; i++) {
        if (list[i] < list[i+1]) {
            int temp = list[i];
            list[i] = list[i + 1];
            list[i + 1] = temp;
            for (int j = i + 1; j < length - 1; j++) {
                if (list[j] < list[j + 1]) {
                    int temp = list[j];
                    list[j] = list[j + 1];
                    list[j + 1] = temp;
                }
            }
        }
    }
}