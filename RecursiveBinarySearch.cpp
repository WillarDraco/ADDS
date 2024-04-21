#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int> array, int target) {
    int middle = (array.end() - array.begin())/2;
    
    if (array.size() == 1 && array[0] != target) {
        return false;
    }

    if (middle < target) {
        return search(std::vector<int>{array.begin(), array.begin() + middle}, target);
    } else if (middle > target) {
        return search(std::vector<int>{array.begin()+ middle + 1, array.end()},target);
    } else if (middle == target) {
        return true;
    }
}