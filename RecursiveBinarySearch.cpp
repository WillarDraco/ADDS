#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int> array, int target) {
    int middle = array.size() / 2;
    std::cout << (1/2) << std::endl;
    
    if (array.size() == 1 && array[0] != target) {
        return false;
    }

    std::cout << "Middle " << array[middle] << std::endl;

    if (array[middle] == target) {
        return true;
    } else if (array[middle] < target) {
        return search(std::vector<int>{array.begin(), array.begin() + middle}, target);
    } else if (array[middle] > target) {
        return search(std::vector<int>{array.begin() + middle + 1, array.end()},target);
    }
}