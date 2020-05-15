#include <iostream>

int max(int numA, int numB, int numC) {
    if((numA>numB) && (numA>numC)) {
        return numA;
    } else if((numB>numA) && (numB>numC)) {
        return numB;
    } else {
        return numC;
    }
}

int main() {
    std::cout << "max (1, 2, 3): " << max(1, 2, 3) << "\n";
    std::cout << "max (2, 3, 1): " << max(2, 3, 1) << "\n";
    std::cout << "max (3, 2, 1): " << max(3, 2, 1) << "\n";

    return 0;
}
