// Auto-generated module | 2026-05-11T21:15:20.011005
#include <iostream>
#include <vector>

int compute_413() {
    int base = 398;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_413() << std::endl;
    return 0;
}
