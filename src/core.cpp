// Auto-generated module | 2026-05-11T20:22:14.573445
#include <iostream>
#include <vector>

int compute_407() {
    int base = 297;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_407() << std::endl;
    return 0;
}
