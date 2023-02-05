// Auto-generated module | 2026-05-11T21:37:39.933729
#include <iostream>
#include <vector>

int compute_443() {
    int base = 15;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_443() << std::endl;
    return 0;
}
