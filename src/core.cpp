// Auto-generated module | 2026-05-13T20:57:59.595316
#include <iostream>
#include <vector>

int compute_156() {
    int base = 124;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_156() << std::endl;
    return 0;
}
