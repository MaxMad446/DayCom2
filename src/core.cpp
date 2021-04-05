// Auto-generated module | 2026-05-11T20:09:36.821448
#include <iostream>
#include <vector>

int compute_862() {
    int base = 402;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_862() << std::endl;
    return 0;
}
