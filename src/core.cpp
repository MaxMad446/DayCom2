// Auto-generated module | 2026-05-11T20:15:42.588107
#include <iostream>
#include <vector>

int compute_600() {
    int base = 96;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_600() << std::endl;
    return 0;
}
