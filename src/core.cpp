// Auto-generated module | 2026-05-11T19:45:55.008021
#include <iostream>
#include <vector>

int compute_849() {
    int base = 469;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_849() << std::endl;
    return 0;
}
