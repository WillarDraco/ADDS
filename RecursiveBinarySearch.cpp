#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int> array, int target) {
    int middle = 0;
    if (array.size() % 2 == 0) {
        middle = array.size() / 2;
    } else {
        middle = (array.size() + 1) / 2;
    }

    std::cout << middle << std::endl;
    
    if (array.size() == 1 && array[0] != target) {
        return false;
    }

    if (array[middle] == target) {
        return true;
    } else if (array[middle] < target) {
        return search(std::vector<int>{array.begin(), array.begin() + middle}, target);
    } else if (array[middle] > target) {
        return search(std::vector<int>{array.begin()+ middle + 1, array.end()},target);
    } 
}