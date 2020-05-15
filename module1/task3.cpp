#include <iostream>

auto printString(std::string text, int x) {
    int i=1;
    while(i<=x) {
        std::cout << text;
        i++;
    }
}

int main() {
    printString("Hello", 5);
    std::cout << "\n";

    printString("AbC", 2);
    std::cout << "\n";

    printString("HiHi ", 6);
    std::cout << "\n";

    return 0;
}
