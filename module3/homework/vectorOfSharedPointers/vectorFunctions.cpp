#include "vectorFunctions.hpp"

#include<iostream>

std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> vec;
    vec.reserve(count);
    for (size_t i = 0; i < count; i++) {
        vec.emplace_back(std::make_shared<int>(i));
        auto size = vec.size();
        }
        return vec;
}

void print (const std::vector<std::shared_ptr<int>>& vec) {
    for (auto el : vec) {
        std::cout << *el << ' ';
    }
    std::cout << '\n';
}

void add10(std::vector<std::shared_ptr<int>>& vec) {
    for (auto & el :vec) {
        if(el){
        *el += 10;
        }
    }
}

void sub10(int* const num) {}

void sub10(std::vector<std::shared_ptr<int>>& vec) {}

