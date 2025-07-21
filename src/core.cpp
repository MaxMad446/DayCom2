// Auto-generated module | 2026-05-12T21:25:10.840019
#include <iostream>
#include <vector>

int compute_300() {
    int base = 166;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_300() << std::endl;
    return 0;
}
