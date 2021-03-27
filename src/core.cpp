// Auto-generated module | 2026-05-12T20:41:51.900598
#include <iostream>
#include <vector>

int compute_913() {
    int base = 423;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_913() << std::endl;
    return 0;
}
