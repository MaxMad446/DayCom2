// Auto-generated module | 2026-05-11T21:21:39.912488
#include <iostream>
#include <vector>

int compute_636() {
    int base = 364;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_636() << std::endl;
    return 0;
}
