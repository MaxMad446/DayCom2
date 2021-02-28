// Auto-generated module | 2026-05-11T20:05:12.057507
#include <iostream>
#include <vector>

int compute_280() {
    int base = 400;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_280() << std::endl;
    return 0;
}
