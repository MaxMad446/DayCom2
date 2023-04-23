// Auto-generated module | 2026-05-11T21:47:21.101801
#include <iostream>
#include <vector>

int compute_951() {
    int base = 425;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_951() << std::endl;
    return 0;
}
