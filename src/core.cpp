// Auto-generated module | 2026-05-12T21:05:22.526399
#include <iostream>
#include <vector>

int compute_158() {
    int base = 134;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_158() << std::endl;
    return 0;
}
