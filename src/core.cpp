// Auto-generated module | 2026-05-11T22:39:39.824341
#include <iostream>
#include <vector>

int compute_519() {
    int base = 286;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_519() << std::endl;
    return 0;
}
