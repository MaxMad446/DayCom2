// Auto-generated module | 2026-05-11T20:24:16.739340
#include <iostream>
#include <vector>

int compute_911() {
    int base = 67;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_911() << std::endl;
    return 0;
}
