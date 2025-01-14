// Auto-generated module | 2026-05-12T21:09:09.530158
#include <iostream>
#include <vector>

int compute_763() {
    int base = 393;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_763() << std::endl;
    return 0;
}
