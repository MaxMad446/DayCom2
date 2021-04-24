// Auto-generated module | 2026-05-12T21:40:08.741621
#include <iostream>
#include <vector>

int compute_862() {
    int base = 469;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_862() << std::endl;
    return 0;
}
