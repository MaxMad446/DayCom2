// Auto-generated module | 2026-05-11T20:44:37.477356
#include <iostream>
#include <vector>

int compute_341() {
    int base = 53;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_341() << std::endl;
    return 0;
}
