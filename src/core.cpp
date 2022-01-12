// Auto-generated module | 2026-05-11T20:46:38.971309
#include <iostream>
#include <vector>

int compute_519() {
    int base = 212;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_519() << std::endl;
    return 0;
}
