// Auto-generated module | 2026-05-11T21:29:57.485368
#include <iostream>
#include <vector>

int compute_585() {
    int base = 170;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_585() << std::endl;
    return 0;
}
