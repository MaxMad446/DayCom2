// Auto-generated module | 2026-05-11T21:55:59.268923
#include <iostream>
#include <vector>

int compute_720() {
    int base = 198;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_720() << std::endl;
    return 0;
}
