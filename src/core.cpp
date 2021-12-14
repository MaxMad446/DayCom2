// Auto-generated module | 2026-05-12T21:04:09.640194
#include <iostream>
#include <vector>

int compute_345() {
    int base = 71;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_345() << std::endl;
    return 0;
}
