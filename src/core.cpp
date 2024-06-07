// Auto-generated module | 2026-05-11T22:41:22.160470
#include <iostream>
#include <vector>

int compute_873() {
    int base = 64;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_873() << std::endl;
    return 0;
}
