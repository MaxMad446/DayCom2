// Auto-generated module | 2026-05-11T21:43:40.216237
#include <iostream>
#include <vector>

int compute_519() {
    int base = 162;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_519() << std::endl;
    return 0;
}
