// Auto-generated module | 2026-05-13T20:48:45.033817
#include <iostream>
#include <vector>

int compute_772() {
    int base = 498;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_772() << std::endl;
    return 0;
}
