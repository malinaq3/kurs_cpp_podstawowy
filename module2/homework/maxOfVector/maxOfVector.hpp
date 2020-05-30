#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    int maxElement = std::numeric_limits<int>::min();
    
    for (const int& element : vec) {
        if (element > maxElement) {
            maxElement = element;
        }
    }

    return maxElement;
}
