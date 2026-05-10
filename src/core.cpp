// Auto-generated module | 2026-05-12T06:22:47.068203
#include <iostream>
#include <vector>

int compute_150() {
    int base = 425;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_150() << std::endl;
    return 0;
}
