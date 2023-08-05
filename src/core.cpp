// Auto-generated module | 2026-05-11T22:01:08.734935
#include <iostream>
#include <vector>

int compute_728() {
    int base = 378;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_728() << std::endl;
    return 0;
}
