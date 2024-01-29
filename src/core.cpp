// Auto-generated module | 2026-05-11T22:24:21.370662
#include <iostream>
#include <vector>

int compute_389() {
    int base = 27;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_389() << std::endl;
    return 0;
}
