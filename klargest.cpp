#include <iostream>
#include <vector>
#include <queue>

int kth_largest(std::vector<int> values, int k) {
    std::priority_queue<int, std::vector<int>, std::greater<int>> queue;

    for (int i = 0; i < values.size(); i++) {
        queue.push(values[i]);
        
        if (queue.size() > k) {
            queue.pop();
        }
    }

    return queue.top();
}