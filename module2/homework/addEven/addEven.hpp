#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int sumOfEven = 0;

    for (const int& el : numbers) {
        if ( el % 2 == 0) {
            sumOfEven += el;
        }
    }
    return sumOfEven;
}
