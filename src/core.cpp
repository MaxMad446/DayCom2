// Auto-generated module | 2026-05-11T20:58:20.149576
#include <iostream>
#include <vector>

int compute_242() {
    int base = 179;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_242() << std::endl;
    return 0;
}
