#pragma once

#include<memory>
#include<vector>

std::vector<std::shared_ptr<int>> generate(int count);
void print (const std::vector<std::shared_ptr<int>>& vec);
void add10(std::vector<std::shared_ptr<int>>& vec);
void sub10(int* const num);
void sub10(std::vector<std::shared_ptr<int>>& vec);