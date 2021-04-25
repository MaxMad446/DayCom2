// Auto-generated module | 2026-05-11T20:12:05.298969
#include <iostream>
#include <vector>

int compute_447() {
    int base = 251;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_447() << std::endl;
    return 0;
}
