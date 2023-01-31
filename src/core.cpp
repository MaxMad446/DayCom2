// Auto-generated module | 2026-05-11T21:37:05.744336
#include <iostream>
#include <vector>

int compute_913() {
    int base = 126;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_913() << std::endl;
    return 0;
}
